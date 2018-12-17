// Maayez Imam & Abdullah Mohammed

#include <algorithm>
#include <iostream>
#include <vector>

#include "llrb_map.h"

// Tester
int main() {
  LLRB_map<int, char> map;
  std::vector<int> keys{7, 15, 27, 35, 46, 56, 64, 72, 89};
  std::vector<char> values{'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'};

  // Insert a bunch of keys
  for (unsigned int i = 0; i < keys.size(); i++) {
    map.Insert(keys[i], values[i]);
  }
  std::cout << "After insertions:" << std::endl;
  map.Print();

  // Print out the value associated to the specified key
  std::cout << map.Get(27);
  std::cout << std::endl;

  // Delete all the keys in another order
  std::random_shuffle(keys.begin(), keys.end());
  for (auto j : keys) {
    map.Remove(j);
  }
  std::cout << "After deletions:" << std::endl;
  map.Print();

  return 0;
}
