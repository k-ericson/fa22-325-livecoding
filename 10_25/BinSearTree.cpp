#include "BinSearTree.h"

BinSearTree::BinSearTree() {
  root = NULL;
  size = 0;
}

int BinSearTree::getSize() {
  return size;
}

bool BinSearTree::empty() {
  return root == NULL;
}

BinSearTree::~BinSearTree() {
  destructorHelper(root);
}

void BinSearTree::destructorHelper(Node *n) {
  if (n == NULL)
    return;
  destructorHelper(n->getLeft());
  destructorHelper(n->getRight());
  cout << "now removing node with value: "
       << n->data << endl;
  delete n;
}
