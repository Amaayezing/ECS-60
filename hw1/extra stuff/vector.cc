/*
//Maayez Imam 915342727

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
  */
/*double CurrentTime() {
    std::chrono::high_resolution_clock::time_point start;
    start = std::chrono::high_resolution_clock::now();
    auto end = std::chrono::high_resolution_clock::now();
    double elapsed_time = std::chrono::duration<double, std::micro>(end - start).count();
    std::cout << "CPU time: " << elapsed_time << " microseconds";
  }*//*

};

//template <typename T>
class Vector {
 public:
  std::vector<int> v;
  int *x = &v[0];
  int *y = &v[1];
  int magnitudes;
  //std::vector<int> x;
  //std::vector<int> y;
  static std::vector<double> CalculateMag(std::vector<int> &v) {
    Vector vec;
    //vec.magnitudes =
    std::vector<double> mag;
    for (unsigned int i = 1; i < vec.v.size(); i++) {
    mag[i] = std::sqrt((vec.x[i] * vec.x[i]) + (vec.y[i] * vec.y[i]));
    //int magni[i] = (int)mag;
    }
    return mag;
  }

*/
/*std::ostream&operator<(std::ostream& os, const T& obj) {
    return os;
  }*//*


};

int BinarySearch(std::vector<int> &v, std::vector<int> key);
int LinearSearch(std::vector<int> &v, std::vector<int> key);

int main(int argc, char* argv[]) {
  */
/*std::string vector_file = argv[0];
  std::string magnitude_file = argv[1];
  std::string result_file = argv[2];*//*


  //open files and store numbers in std::vector
  //e.g std::vector<int> vectors(numbers);

  if (argc != 4) {
    std::cerr << "Usage: " << argv[0]
              << " <vector_file.dat> <magnitude_file.dat> <result_file.dat>"
              << std::endl;
    exit(1);
  }

  Vector ve;
  std::ifstream vectors;//(argv[1]);
  vectors.open(argv[1]);
  if (vectors) {
    int *vect;
    while (vectors >> *vect >> *vect) {
      for (int i = 0; i < 2; i ++) {
        ve.v.push_back(vect[i]);
      }
    }
  }
  else {
    std::cerr << "Error: cannot open file " << argv[1] << std::endl;
    exit(1);
  }
  //vectors.close();

  std::vector<int> mag;
  std::ifstream magnitudes;//(argv[2]);
  magnitudes.open(argv[2]);
  if (magnitudes) {
    int m;
    while (magnitudes >> m) {
      mag.push_back(m);
    }
  }
  else {
    std::cerr << "Error: cannot open file " << argv[2] << std::endl;
    exit(1);
  }

  */
/*std::ifstream results;
  results.open(argv[3]);
  if (!results.good()) {
    std::cerr << "Error: cannot open file " << argv[3] << std::endl;
    exit(1);
  }*//*

  //magnitudes.close();

  */
/*std::ofstream results;
  results.open(argv[3], std::ofstream::out | std::ofstream::trunc);//std::string("vectors_") + argv[3] + ".dat",
             //std::ofstream::trunc);
  if (!results.good()) {
    std::cerr << "Error: cannot open file " << argv[3] << std::endl;
    exit(1);
  }*//*



  //Time ct;
  Vector vec;

  std::cout << "Choice of search method ([l]inear, [b]inary)?\n";
  char input;
  while (true) {
    std::cin >> input;
    if (input == 'l' || input == 'b') {
      break;
    }
    else {
      std::cerr << "Incorrect choice\n";
    }
  }
  //ct.Reset();
  switch (input) {
    case 'l': {
      std::chrono::high_resolution_clock::time_point start;
      start = std::chrono::high_resolution_clock::now();

      //run linear search
      //std::cout << LinearSearch(&vec, mag);

      int lin = LinearSearch(vec.v, mag);
      //std::cout << lin << std::endl;

      std::ofstream results(argv[3]);
      FILE *file;
      file = fopen(argv[3], "w'");
      if (file == nullptr) {
        std::cout << "Error: cannot open file " << argv[3];
        exit(1);
      }
      if (results.is_open()) {
        results << lin;
      }

      auto end = std::chrono::high_resolution_clock::now();
      double elapsed_time = std::chrono::duration<double, std::micro>(end - start).count();
      std::cout << "CPU time: " << elapsed_time << " microseconds\n";
    }
      break;
    case 'b': {
      std::chrono::high_resolution_clock::time_point star;
      star = std::chrono::high_resolution_clock::now();
      //sort list of vectors
      //run binary search

      std::sort(vec.v.begin(), vec.v.end());

      int bin = BinarySearch(vec.v, mag);
      //std::cout << bin << std::endl;

      std::ofstream results(argv[3]);//("res_1.dat");
      FILE *file;
      file = fopen(argv[3], "w'");
      if (file == nullptr) {
        std::cout << "Error: cannot open file " << argv[3];
        exit(1);
      }
      if (results.is_open()) {
        results << bin;
      }
      */
/*else {
        std::cerr << "Error: cannot open file " << argv[3] << std::endl;
        exit(1);
      }*//*


      auto stop = std::chrono::high_resolution_clock::now();
      double elapse = std::chrono::duration<double, std::micro>(stop - star).count();
      std::cout << "CPU time: " << elapse << " microseconds\n";
    }
      break;
    default:
      std::cerr << "Incorrect choice\n";
      //go back to getting user choice
  }
  vectors.close();
  magnitudes.close();
}

*/
/*int LinearSearch(std::vector<int> &v, int key) {
  std::vector<double> magn = Vector::CalculateMag(v);
  int count = 0;
  for (int i = 0; i < v.size(); i++) {
    for (int j = 0; j < v.size(); j++) {
      magn[i] = (int)magn[i];
      if (v[i] == magn[j]) {
        count++;
      }
    }
  }
  return count;
}*//*


int LinearSearch(std::vector<int> &v, std::vector<int> key) {
  int count = 0;
  for (unsigned int i = 0; i < v.size(); i++) {
    for (unsigned int j = 0; j < v.size(); j++) {
      if (v[i] == key[j]) {
        count++;
        return count;
      }
    }
  }
  return -1;
}
*/
/*int LinearSearch(Vector *v, std::vector<int> m) {
  std::vector<double> magn = Vector::CalculateMag(v);
  int count = 0;
  for (int i = 0; i < m.size(); i++) {
    for (int j = 0; j < m.size(); j++) {
      magn[i] = (int)magn[i];
      if (m[i] == magn[j]) {
        count++;
      }
    }
  }
  return count;
  //int count = 0;
  //for (m in magnitudes)
  //if (search if m is in vectors)
  //count++
}*//*


int BinarySearch(std::vector<int> &v, std::vector<int> key) {
  int count = 0;
  int min = 0;
  int max = v.size() - 1;

  while (min <= max) {
    int mid = min + (max - min) / 2;

    for (unsigned int i = 0; i < v.size(); i++) {
      if (v[mid] == key[i]) {
        count++;
        return count;
      }

      if (v[mid] < key[i])
        min = mid + 1;

      else
        max = mid - 1;
    }
  }
    return -1;
}*/
