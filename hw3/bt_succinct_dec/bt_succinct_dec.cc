// Maayez Imam 915342727

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <istream>
#include "binary_tree.h"

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cerr << "Usage: " << argv[0] << " <input_file>\n";
    exit(1);
  }

  std::vector<int> structure;
  std::vector<int> data;
  std::string line1;
  std::string line2;
  int n;
  unsigned int counter = 0;
  std::ifstream input_file;
  input_file.open(argv[1]);
  if (!input_file.is_open()) {
    std::cerr << "Error: cannot open file " << argv[1] << std::endl;
    exit(1);
  }
  /*if (!getline(input_file, line1)) {
    std::cerr << "Error: cannot read structure line";
    exit(1);
  }*/
  getline(input_file, line1);
  std::stringstream s(line1);
  while (s >> n) {
    structure.push_back(n);
    if (n != 0 && n != 1) {
      std::cerr << "Error: structure line is invalid\n";
      exit(1);
    }
  }
  int m;
  getline(input_file, line2);
  /*if (!getline(input_file, line2)) {
    std::cerr << "Error: cannot read data line";
    exit(1);
  }*/
  std::stringstream ss(line2);
  while (ss >> m) {
    data.push_back(m);
    /*if () {
      std::cerr << "Error: data line is invalid\n";
      exit(1);
    }*/
  }

  if (structure.empty()) {
    std::cerr << "Error: cannot read structure line\n";
    exit(1);
  }
  if (data.empty()) {
    std::cerr << "Error: cannot read data line\n";
    exit(1);
  }


  for (unsigned int k = 0; k <= structure.size(); k++) {
    if (((structure[k] != 0) && (structure[k]!= 1))) {
      std::cerr << "Error: structure line is invalid\n";
      exit(1);
    }
    if (structure[k] == 1) {
      counter++;
    }
  }
  if (data.size() != counter) {
    std::cerr << "Error: data line is invalid\n";
    exit(1);
  }
  /*for (unsigned int i = 0; i < structure.size(); i++) {
    std::cout << structure[i] << " ";
  }*/
  //std::cout << std::endl;
  /*for (int j = 0; j < data.size(); j++) {
    std::cout << data[j] << " ";
  }*/

  std::cout << "Preorder:";
  for (unsigned int j = 0; j <= data.size(); j++) {
    std::cout << " " << data[j];
  }

  std::cout << std::endl;

  std::cout << "Inorder:";
  for (unsigned int i = 0; i <= data.size(); i++) {
    std::cout << " " << data[i];
  }
  return 0;
}

