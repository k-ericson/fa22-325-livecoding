#ifndef NODE_H
#define NODE_H

class Node{
 private:
  Node *left, *right;
 public:
  int data;
  Node(int val);
  Node* getLeft();
  Node* getRight();
  void setLeft(Node *n);
  void setRight(Node *n);
};
#endif //NODE_H
