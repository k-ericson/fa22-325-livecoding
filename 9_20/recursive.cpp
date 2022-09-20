#include <iostream>
#include <string>

using namespace std;

//node
struct Node {
  Node *next;
  string data;
};

class LinkedList {
private:
  Node* head;
  void print_helper(Node* current);
  void destruct_helper(Node* current);

public:
  LinkedList();
  ~LinkedList();
  void push_back(string s);
  void push_front(string s);
  void remove(string s);
  void print();
};


//linked list implementation
LinkedList::LinkedList() {
  head = NULL;
}

void LinkedList::push_front(string s) {
  //make a node from the data
  Node* temp = new Node;
  temp->data = s;
  temp->next = NULL;

  //shove it at the front
  temp->next = head;
  head = temp;
}
  
