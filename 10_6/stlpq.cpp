#include <queue>
#include <iostream>

using namespace std;

class compare {
public:
  bool operator()(const int& lhs, const int& rhs) const {
    return (lhs > rhs);
  }
};

int main() {
  // priority_queue<int> pq;

  //  priority_queue<int, vector<int>, compare > pq;

  priority_queue<int, vector<int>, less<int> > pq;

  pq.push(1);
  pq.push(3);
  pq.push(2);
  pq.push(5);
  pq.push(4);
  while (!pq.empty()) {
    cout << pq.top() << " ";
    pq.pop();
  }
  cout << endl;
  
  return 0;
}
