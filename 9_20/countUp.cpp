
#include <iostream>

using namespace std;

void cUp(int x);

int main() {
  cout << "gimme num: ";
  int y;
  cin >> y;
  cUp(y);
  
  return 0;
}

void cUp(int x) {
  if (x < 0)
    return;
  
  cUp(x - 1);
  cout << x << endl;
}
