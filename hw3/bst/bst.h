// Maayez Imam 915342727

#ifndef BST_H_
#define BST_H_

#include <algorithm>
#include <iostream>
#include <memory>
#include <utility>
#include <stack>
#include <queue>

/*
 * Class definition
 */
template <typename T>
class BST {
 public:
  /* Return floor key in tree */
  const T& floor(const T &key);
  /* Return ceil key in tree */
  const T& ceil(const T &key);
  /* Return k-th smallest key in tree */
  const T& kth_small(const int kth);

  /* Return whether @key is found in tree */
  bool contains(const T& key);

  /* Return max key in tree */
  const T& max();
  /* Return min key in tree */
  const T& min();

  /* Insert @key in tree */
  void insert(const T &key);
  /* Remove @key from tree */
  void remove(const T &key);

  /* Print tree in-order */
  void print();

 private:
  struct Node{
    T key;
    std::unique_ptr<Node> left;
    std::unique_ptr<Node> right;
  };
  std::unique_ptr<Node> root;

  /* Useful recursive helper methods */
  void insert(std::unique_ptr<Node> &n, const T &key);
  void remove(std::unique_ptr<Node> &n, const T &key);
  void print(Node *n, int level);
};

/*
 * Implementation
 */
template <typename T>
const T& BST<T>::floor(const T &key) {
  /* Your implementation */
  std::unique_ptr<Node> n = std::unique_ptr<Node>(new Node{key});
  //Node *n = root.get();
  if (!n) {
    throw std::runtime_error("Empty tree");
  }
  if (n->key == key) {
    //return key;
    return n->key;
  }
  if (n->key > key) {
    //n = n->left.get();
    return floor(n->left);
    //return floor(n->left);
  }
  else if (n->key < key) {
    int F = floor(n->right);
    return (n->key >= F ? n->key : F);
  } else {
    throw std::runtime_error("Cannot find floor for key " << key);
  }
}

template <typename T>
const T& BST<T>::ceil(const T &key) {
  /* Your implementation */
  std::unique_ptr<Node> n = std::unique_ptr<Node>(new Node{key});
  //Node* n = root.get();
  if (n == NULL) {
    exit(1);
  }
  if (n->key == key) {
    //return key;
    return n->key;
  }
  if (n->key < key) {
    //n = n->right.get();
    return ceil(n->right);
  }
  else if (n->key > key) {
    int C = ceil(n->left);
    return (C >= key) ? C : n->key;
  } else {
    throw std::runtime_error("Cannot find ceil for key " << key);
  }
}

template <typename T>
const T& BST<T>::kth_small(const int kth) {
  /* Your implementation */
  std::stack<T> s;
  std::unique_ptr<Node> n = root.get();
  //root = std::unique_ptr<Node>(new Node{kth});

  while (n) {
    s.push(n);
    n = n->left.get();
  }

  while (n == s.top()) {
    if (n->right) {
      n = n->right.get();
      while (n) {
        s.push(n);
        n = n->left.get();
      }
    } else {
      throw std::runtime_error("Cannot find " << root->key << "th element\n");
    }
  }
  return n;
}

/*
 * @@@ Code below should not be modified @@@
 */
template <typename T>
bool BST<T>::contains(const T &key) {
  Node *n = root.get();

  while (n) {
    if (key == n->key)
      return true;

    if (key < n->key)
      n = n->left.get();
    else
      n = n->right.get();
  }

  return false;
}

template <typename T>
const T& BST<T>::max(void) {
  if (!root) throw std::runtime_error("Empty tree");
  Node *n = root.get();
  while (n->right) n = n->right.get();
  return n->key;
}

template <typename T>
const T& BST<T>::min(void) {
  if (!root) throw std::runtime_error("Empty tree");
  Node *n = root.get();
  while (n->left) n = n->left.get();
  return n->key;
}

template <typename T>
void BST<T>::insert(const T &key) {
  insert(root, key);
}

template <typename T>
void BST<T>::insert(std::unique_ptr<Node> &n, const T &key) {
  if (!n)
    n = std::unique_ptr<Node>(new Node{key});
  else if (key < n->key)
    insert(n->left, key);
  else if (key > n->key)
    insert(n->right, key);
  else
    std::cerr << "Key " << key << " already inserted!\n";
}

template <typename T>
void BST<T>::remove(const T &key) {
  remove(root, key);
}

template <typename T>
void BST<T>::remove(std::unique_ptr<Node> &n, const T &key) {
  /* Key not found */
  if (!n) return;

  if (key < n->key) {
    remove(n->left, key);
  } else if (key > n->key) {
    remove(n->right, key);
  } else {
    /* Found node */
    if (n->left && n->right) {
      /* Two children: replace with min node in right subtree */
      n->key = min(n->right.get())->key;
      remove(n->right, n->key);
    } else {
      /* Replace with only child or with nullptr */
      n = std::move((n->left) ? n->left : n->right);
    }
  }
}

template <typename T>
void BST<T>::print() {
  if (!root) return;
  print(root.get(), 1);
  std::cout << std::endl;
}

template <typename T>
void BST<T>::print(Node *n, int level) {
  if (!n) return;

  print(n->left.get(), level + 1);
  std::cout << n->key
      << " (" << level << ") ";
  print(n->right.get(), level + 1);
}

#endif /* BST_H_ */
