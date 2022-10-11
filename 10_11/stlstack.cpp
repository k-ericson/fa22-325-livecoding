#include <stack>
#include <iostream>
#include <list>

using namespace std;

int main() {
  stack<int, list<double> > s;

  for (int i = 0; i < 20; i++) {
    s.push(i);
  }

  cout << "emptying the stack: " << endl;
  while(!s.empty()) {
    cout << "stack size: " << s.size() << endl;
    cout << "peek: " << s.top() << endl;
    s.pop();
  }
  
  return 0;
}
