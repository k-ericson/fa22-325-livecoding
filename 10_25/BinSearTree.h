#ifndef BINSEARTREE_H
#define BINSEARTREE_H
#include "Node.h"

class BinSearTree {
 private:
  Node *root;
  int size;
  void destructorHelper(Node* n);
  void insertHelper(int val, Node* n);
  void printHelper(Node* n);
  void deleteNHelper(int val, Node* &n);
 public:
  BinSearTree();
  ~BinSearTree();
  void insert(int val);
  void print();
  void deleteNode(int val);
  int getSize();
  bool empty();
  int min();
  int max();
  bool contains(int val);
};

#endif //BINSEARTREE_H
