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
  
LinkedList::~LinkedList() {
  destruct_helper(head);
}

void LinkedList::destruct_helper(Node *current) {
  if (current == NULL)
    return;
  destruct_helper(current->next);
  cout << "Removing List member: " << current->data << endl;
  delete current;
}

void LinkedList::print() {
  cout << "HEAD";
  print_helper(head);
  cout << "-->NULL" << endl;
}

void LinkedList::print_helper(Node *current) {
  if (current == NULL)
    return;
  cout << "-->" << current->data;
  print_helper(current->next);
}

void LinkedList::push_back(string data) {
  Node *node = new Node;
  node->data = data;
  node->next = NULL;

  if (head == NULL)
    head = node;
  else {
    Node * tail = head;
    while (tail->next != NULL) {
      tail = tail->next;
    }
    tail->next = node;
  }
}

void LinkedList::remove(string s) {
  Node *tmp, *eraser;

  if (head == NULL)
    return;
  if (head->data == s) {
    eraser = head;
    head = head->next;
    delete eraser;
    return;
  }
  tmp = head;

  while(tmp->next != NULL && tmp->next->data != s) {
    tmp = tmp->next;
  }
  if (tmp->next == NULL)
    return;
  eraser = tmp->next;
  tmp->next = eraser->next;
  delete eraser;
}

int main() {
  LinkedList L1;
  L1.push_front("2");
  L1.print();
  L1.push_back("zebra");
  L1.print();
  L1.push_front("racecar");
  L1.print();
  L1.push_front("word");
  L1.push_back("front");
  L1.push_front("zebra");
  L1.print();
  L1.remove("zebra");
  L1.print();
  
  return 0;
}
