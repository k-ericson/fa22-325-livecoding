#include <cstring>
#include <iostream>

using namespace std;

int main() {
  char * s = new char[8];
  char * s2 = new char[49];

  cout << "gimme string: ";
  cin.getline(s, 8);
  cout << "gimme string2: ";
  cin.getline(s2, 49);

  cout << "strcmp(" << s << ", " << s2 << "): " << strcmp(s, s2) << endl;
  
  return 0;
}
