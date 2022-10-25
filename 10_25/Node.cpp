#include "Node.h"

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

void Node::setLeft(Node *n) {
  left = n;
}

void Node::setRight(Node *n) {
  right = n;
}
