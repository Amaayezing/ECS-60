// Maayez Imam 915342727

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cstring>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <list>
#include <queue>

template <typename T>
class Stack {
 public:
  unsigned int Size();
  T& Top();
  void Pop();
  void Push(const T &item);

 private:
  std::vector<T> items;
};

template <typename T>
unsigned int Stack<T>::Size() {
  return items.size();
}

template <typename T>
T& Stack<T>::Top(void) {
  if (!Size()) {
    throw std::underflow_error("Empty stack!");
  }
  return items.back();
}

template <typename T>
void Stack<T>::Pop() {
  if (!Size()) {
    throw std::underflow_error("Empty stack!");
  }
  return items.pop_back();
}

template <typename T>
void Stack<T>::Push(const T &item) {
  return items.push_back(item);
}

template <typename T>
class Queue {
 public:
  unsigned int Size();
  T& Front();
  T& Back();
  void Pop();
  void Push(const T &item);

 private:
  std::list<T> items;
};

template <typename T>
unsigned int Queue<T>::Size() {
  return items.size();
}

template <typename T>
T& Queue<T>::Front() {
  if (!Size()) {
    throw std::underflow_error("Empty queue!");
  }
  return items.front();
}

template <typename T>
T& Queue<T>::Back() {
  if (!Size()) {
    throw std::underflow_error("Empty queue!");
  }
  return items.back();
}

template <typename T>
void Queue<T>::Push(const T &item) {
  items.push_back(item);
}

template <typename T>
void Queue<T>::Pop() {
  if (!Size()) {
    throw std::underflow_error("Empty queue!");
  }
  return items.pop_front();
}


int main(int argc, char* argv[]) {
  if (argc != 3) {
    std::cerr << "Usage: " << argv[0] << " <input_file> <container_size>\n";
    exit(1);
  }

  int num = 0;
  std::vector<int> lug;
  std::ifstream input_file;
  input_file.open(argv[1]);
  if (!input_file.is_open()) {
    std::cerr << "Error: cannot open file " << argv[1] << std::endl;
    exit(1);
  }

  unsigned int container_size = std::atoi(argv[2]);

  if (std::atoi(argv[2]) <= 0) {
    std::cerr << "Error: invalid container size\n";
    exit(1);
  }

  Queue<int> queues;
  Queue<int> tempQueue;
  Stack<int> stack;
  std::vector<int> tempVec;
  unsigned int i = 0;
  while (input_file >> num) {
    lug.push_back(num);
  }
  input_file.close();

  while (i != lug.size()) {
    queues.Push(lug[i]);
    if (queues.Size() == container_size) {
      while (queues.Size() != 0) {
        tempVec.push_back(queues.Front());
        queues.Pop();
      }
      for (int j = tempVec.size() - 1; j >= 0; j--) {
        stack.Push(tempVec[j]);
        tempVec.pop_back();
      }
    }
    i++;
  }

  if (queues.Size() != 0) {
    while (queues.Size() != 0) {
      tempVec.push_back(queues.Front());
      queues.Pop();
    }
    for (int j = tempVec.size() - 1; j >= 0; j--) {
      stack.Push(tempVec[j]);
      tempVec.pop_back();
    }
  }

  while (stack.Size() != 0) {
    std::cout << stack.Top() << " ";
    stack.Pop();
  }

  return 0;
}
