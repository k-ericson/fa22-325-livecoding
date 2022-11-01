#include "BinSearTree.h"
#include <iostream>

using namespace std;


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

void BinSearTree::insert(int val) {
  if (root == NULL) {
    root = new Node(val);
    size++;
    return;
  }
  insertHelper(val, root);
  size++;
}

void BinSearTree::insertHelper(int val, Node *n) {
  if(val < n->data) {
    //go left
    if (n->gleft() == NULL) {
      n->setLeft(new Node(val));
      return;
    }
    insertHelper(val, n->gleft());
  }
  else {
    //go right
    if (n->gright() == NULL) {
      n->setRight(new Node(val));
      return;
    }
    insertHelper(val, n->gright());
  }
}

void BinSearTree::print() {
  if (root == NULL) {
    cout << "Nothin' here Champ!" << endl;
    return;
  }
  printHelper(root);
  //added endl here to flush to screen...
  cout << endl;
}

void BinSearTree::printHelper(Node *n) {
  if (n == NULL) {
    return;
  }
  
  printHelper(n->gleft());
  cout << n->data << " ";
  printHelper(n->gright());

}

void BinSearTree::deleteNode(int val) {
  if (root == NULL) {
    return;
  }
  deleteNHelper(val, root);
}

void BinSearTree::deleteNHelper(int val, Node* &n) {
  if (n == NULL) {
    return;
  }
  if (n->data == val) {
    //do stuff
    Node * temp;
    if (n->left == NULL) {
      temp = n->right;
      delete n;
      n = temp;
      return;
    }
    if (n->right == NULL) {
      temp = n->left;
      delete n;
      n = temp;
      return;
    }
    //2 children, bad
    temp = n->right;
    Node *parent = NULL;
    while (temp->left != NULL) {
      parent = temp;
      temp = temp->left;
    }
    n->data = temp->data;
    if (parent != NULL)
      deleteNHelper(parent->left->data, (parent->left));
    else  //I believe the problem was ultimately here, with stupid logic issue (I think parent instead of n
      deleteNHelper(n->right->data, n->right);
      
  }
  else {
    if (val < n->data)
      deleteNHelper(val, n->left);
    else
      deleteNHelper(val, n->right);
  }
}
  
