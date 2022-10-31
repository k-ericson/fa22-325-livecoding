#include <string>
#include <queue>
#include <iostream>

using namespace std;

int main() {
  queue<string> squeue;

  squeue.push("dog");
  squeue.push("casey");
  squeue.push("empty string");
  squeue.push("7");
  squeue.push("NULL");

  while (!squeue.empty()) {
    cout << squeue.front() << " ";
    squeue.pop();
  }
  cout << endl;
  
  return 0;
}
