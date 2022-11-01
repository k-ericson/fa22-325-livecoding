#include "Node.h"
//#include <iostream>
#ifndef NULL
#define NULL 0
#endif
using namespace std;

Node::Node(int val) {
  left = NULL;
  right = NULL;
  data = val;
}

Node* Node::getLeft() {
  return left;
}

Node* Node::getRight() {
  return right;
}

Node* Node::gleft() {
  return left;
}

Node* Node::gright() {
  return right;
}

void Node::setLeft(Node *n) {
  left = n;
}

void Node::setRight(Node *n) {
  right = n;
}
