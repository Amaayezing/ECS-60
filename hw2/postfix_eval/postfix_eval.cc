// Maayez Imam 915342727

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <cstring>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

template <typename T>
class Stack {
 public:
  unsigned int Size();
  T& Top();
  void Pop();
  void Push(const T &item);

 private:
  std::vector<T> fix;
};

template <typename T>
unsigned int Stack<T>::Size() {
  return fix.size();
}

template <typename T>
T& Stack<T>::Top(void) {
  if (!Size()) {
    std::cerr << "Error: invalid expression";
  }
  return fix.back();
}

template <typename T>
void Stack<T>::Pop() {
  if (!Size()) {
    std::cerr << "Error: invalid expression";
  }
  fix.pop_back();
}

template <typename T>
void Stack<T>::Push(const T &item) {
  fix.push_back(item);
}

double Operation(const std::string &op1,
                 const std::string &op2, const std::string &operand);
std::string Calculate(const std::string &postfix);
bool IsOperator(const std::string &op);

int main() {
  std::string post;
  Stack<double> tokens;
  do {
    getline(std::cin, post);
    if (!post.empty()) {
      std::string answer = Calculate(post);
      std::cout << answer << std::endl;
    }
  } while (!std::cin.eof());

  std::cout << "Bye!\n";
  return 0;
}

std::string Calculate(const std::string &postfix) {
  std::vector<std::string> fix;
  Stack<std::string> tokens;
  std::string post;
  std::stringstream expression(postfix);

  while (expression >> post) {
    fix.push_back(post);
  }

  std::string one;
  std::string two;

  for (const std::string &i : fix) {
    if (IsOperator(i)) {
      one = tokens.Top(); tokens.Pop();
      two = tokens.Top(); tokens.Pop();
      double num = Operation(one, two, i);
      std::stringstream express;
      express << num;
      std::string exp = express.str();
      tokens.Push(exp);
    } else {
      char *num;
      double throwaway = strtod(i.c_str(), &num);
      throwaway++;
      if (*num) {
        std::cerr << "Error: unknown symbol '" << i.c_str() << "'";
        return "";
      }
      tokens.Push(i);
    }
  }
  if (tokens.Size() != 1) {
    std::cerr << "Error: invalid expression";
    return "";
  } else {
    return tokens.Top();
  }
}

/* create empty stack
 *
 * do
 * if token is number
 * push to stack
 * else if token is operator
 * pop two numbers from stack
 * perform operation
 * push result to stack
 * while there are still tokens
 *
 * pop final result from stack*/

double Operation(const std::string &op1,
                 const std::string &op2, const std::string &operand) {
  char *num;
  double opOne = std::strtod(op1.c_str(), &num);
  double opTwo = std::strtod(op2.c_str(), &num);
  switch (*operand.c_str()) {
    case '+':
      return opTwo + opOne;
    case '-':
      return opTwo - opOne;
    case '*':
      return opTwo * opOne;
    case '/':
      return opTwo / opOne;
    default:
      exit(1);
  }
}

bool IsOperator(const std::string &op) {
  if (*op.c_str() == '+' || *op.c_str() == '-'
      || *op.c_str() =='*' || *op.c_str() == '/') {
    return true;
  } else {
    return false;
  }
}
