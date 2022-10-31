#include <list>
#include <iostream>

using namespace std;

int main() {
  list<int> mlist;
  mlist.push_back(1);
  mlist.push_back(2);
  mlist.push_back(4);

  //also push front!
  mlist.push_front(-1);
  mlist.push_front(-2);

  cout << "List contains: ";
  list<int>::iterator it;
  for( it = mlist.begin(); it != mlist.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;

  it = mlist.begin();
  while( *it < 4 && it != mlist.end()) {
    it++;
  }
  mlist.insert(it, 3);

  for( it = mlist.begin(); it != mlist.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;

  ///DO NOT DO THIS
  list<list<int>> whye;

  
  return 0;
}
