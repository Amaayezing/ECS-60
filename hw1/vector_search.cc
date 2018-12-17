// Maayez Imam 915342727

#include <iostream>
#include <vector>
#include <string>
#include <chrono> //NOLINT (build/c++11)
#include <fstream>
#include <cstring>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>


class Time {
 public:
  /*double CurrentTime() {
    std::chrono::high_resolution_clock::time_point start;
    start = std::chrono::high_resolution_clock::now();
    auto end = std::chrono::high_resolution_clock::now();
    double elapsed_time = std::chrono::duration<double, std::micro>(end - start).count();
    std::cout << "CPU time: " << elapsed_time << " microseconds";
  }*/
};


// vector class
class Vector {
 public:
  Vector(int x, int y) : x(x), y(y) {
    magnitudes = std::sqrt((x * x) + (y * y));
  }

  double mag() const {
    return magnitudes;
  }

  bool operator<(const Vector& one) {
    return (magnitudes < one.magnitudes);
  }

 private:
  int x = 0;
  int y = 0;
  double magnitudes = 0;
};

int BinarySearch(std::vector<Vector> v, std::vector<int> key);
int LinearSearch(std::vector<Vector> v, std::vector<int> key);

int main(int argc, char* argv[]) {
  // open files and store numbers in std::vector
  // e.g std::vector<int> vectors(numbers);

  if (argc != 4) {
    std::cerr << "Usage: " << argv[0]
              << " <vector_file.dat> <magnitude_file.dat> <result_file.dat>"
              << std::endl;
    exit(1);
  }

  // open vector file
  std::vector<Vector> v;
  int x;
  int y;
  std::ifstream vectors;
  vectors.open(argv[1]);
  if (!vectors.is_open()) {
    std::cerr << "Error: cannot open file " << argv[1] << std::endl;
    exit(1);
  }
  while (vectors >> x >> y) {
    Vector vec = Vector(x, y);
    v.push_back(vec);
  }
  vectors.close();

  // open magnitude file
  std::vector<int> mag;
  int m;
  std::ifstream magnitudes;  // (argv[2]);
  magnitudes.open(argv[2]);
  if (!magnitudes.is_open()) {
    std::cerr << "Error: cannot open file " << argv[2] << std::endl;
    exit(1);
  }
  while (magnitudes >> m) {
    mag.push_back(m);
  }
  magnitudes.close();

  // ask user input
  std::cout << "Choice of search method ([l]inear, [b]inary)?\n";
  char input;
  int match = 0;
  while (true) {
    std::cin >> input;
    if (input == 'l' || input == 'b') {
      break;
    } else {
      std::cerr << "Incorrect choice\n";
    }
  }

  switch (input) {
    case 'l': {
      std::chrono::high_resolution_clock::time_point start;
      start = std::chrono::high_resolution_clock::now();
      // run linear search
      match = LinearSearch(v, mag);
      auto stop = std::chrono::high_resolution_clock::now();
      double elapse = std::chrono::duration<double,
                                            std::micro>(stop - start).count();
      std::cout << "CPU time: " << elapse << " microseconds\n";
    }
      break;

    case 'b': {
      std::chrono::high_resolution_clock::time_point star;
      star = std::chrono::high_resolution_clock::now();
      // sort list of vectors
      // run binary search
      std::sort(v.begin(), v.end());
      match = BinarySearch(v, mag);

      auto end = std::chrono::high_resolution_clock::now();
      double time = std::chrono::duration<double,
                                          std::micro>(end - star).count();
      std::cout << "CPU time: " << time << " microseconds\n";
    }

      break;
    default:
      std::cerr << "Incorrect choice\n";
      // go back to getting user choice
  }

  // create results file
  std::ofstream results;
  results.open(argv[3]);
  if (!results.is_open()) {
    std::cerr << "Error: cannot open file " << argv[3] << std::endl;
    exit(1);
  }
  results << match;
  results.close();
}

// linear search
int LinearSearch(std::vector<Vector> v, std::vector<int> key) {
  int count = 0;
  for (unsigned int i = 0; i < key.size(); i++) {
    for (unsigned int j =0; j < v.size(); j++) {
      if (v[j].mag() == key[i]) {
        count++;
      }
    }
  }
  return count;
}

// binary search
int BinarySearch(std::vector<Vector> v, std::vector<int> key) {
  int count = 0;
  for (auto i : key) {
    int min = 0;
    int max = v.size() - 1;
    while (min <= max) {
      int mid = min + (max - min) / 2;
      if (v[mid].mag() == i) {
        count++;
        return count;
      }
      if (v[mid].mag() < i) {
        min = mid + 1;
      } else {
        max = mid - 1;
      }
    }
  }
  return -1;
}
