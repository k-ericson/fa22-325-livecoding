#include <iostream>
#include <iomanip>

using namespace std;

class circle_queue {
private:
  static const int QUEUE_LENGTH = 5;

  int buffer[QUEUE_LENGTH];
  int front, back;
public:
  circle_queue();
  void push(int thing);
  int pop();
  void print();
};


circle_queue::circle_queue() {
  front = 0;
  back = 0;

  for (int i = 0; i < circle_queue::QUEUE_LENGTH; i++) {
    buffer[i] = 0;
  }
}

void circle_queue::print() {
  for (int i = 0; i < QUEUE_LENGTH; i++) {
    cout << buffer[i] << " ";
  }
  cout << endl;
  cout << "Front: " << front << " Back: " << back << endl;
}

void circle_queue::push(int thing) {
  buffer[back] = thing;

  back++;
  back = back % QUEUE_LENGTH;
}

int circle_queue::pop() {
  int popped;
  popped = buffer[front];

  buffer[front] = 0;
  front++;
  front %= QUEUE_LENGTH;

  return popped;
}

int main() {
  circle_queue larry;
  larry.print();
  larry.push(2);
  larry.print();
  larry.push(7);
  larry.push(300);
  larry.print();
  int thing = larry.pop();
  cout << larry.pop() << endl;
  larry.print();
  larry.push(3999);
  larry.push(42);
  larry.push(7);
  larry.print();
  
  
  return 0;
}
