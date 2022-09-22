#include <string>
#include <iostream>

using namespace std;

void fixer(istream &stream);

int main() {
  cout << "gimme integer: ";
  int x;
  cin >> x;

  while(cin.fail()) {
    fixer(cin);
    cin >> x;
  }

  cout << "victory!  x is: " << x << endl;
  
  return 0;
}

void fixer(istream &s) {
  string garbage;
  s.clear();
  s >> garbage;
  cout << "removed garbage: " << garbage << endl;
}
