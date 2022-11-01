#ifndef NODE_H
#define NODE_H

class Node{
 private:
  
 public:
  Node *left, *right;
  int data;
  Node(int val);
  Node* gleft();
  Node* gright();
  Node* getLeft();
  Node* getRight();
  void setLeft(Node *n);
  void setRight(Node *n);
};
#endif //NODE_H
