// Maayez Imam & Abdullah Mohammed

#include <algorithm>
#include <iostream>
#include <vector>

#include "llrb_multimap.h"

// Tester
int main() {
  LLRB_multimap<int, char> multimap;
  std::vector<int> keys{7, 15, 27, 35, 46};
  std::vector<std::vector<char>> values{{'A', 'B', 'C'}, {'D', 'E', 'F'}
      , {'G'}, {'H', 'I'}, {'J'}};

  // Insert a bunch of keys
  for (unsigned int i = 0; i < keys.size(); ++i) {
    multimap.Insert(keys.at(i), values.at(i));
  }
  std::cout << "After insertions:" << std::endl;
  multimap.Print();

  // Print out the value associated to the specified key
  std::cout << multimap.Get(27);
  std::cout << std::endl;

  // Delete all the keys in another order
  std::random_shuffle(keys.begin(), keys.end());
  for (auto j : keys) {
    multimap.Remove(j);
  }
  std::cout << "After deletions:" << std::endl;
  multimap.Print();

  return 0;
}
