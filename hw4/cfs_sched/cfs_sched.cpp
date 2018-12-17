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

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cerr << "Usage: " << argv[0] << " <task_file.dat>\n";
    exit(1);
  }

  std::ifstream input_file;
  input_file.open(argv[1]);
  if (!input_file.is_open()) {
    std::cerr << "Error: cannot open file " << argv[1] << std::endl;
    exit(1);
  }

  std::vector<char> videntifier;
  std::vector<int> vstart_time;
  std::vector<int> vduration;
  char identifier;
  unsigned int start_time;
  unsigned int duration;

  while (input_file >> identifier >> start_time >> duration) {
    videntifier.push_back(identifier);
    vstart_time.push_back(start_time);
    vduration.push_back(duration);
  }
  input_file.close();
}