#include <string>
#include <iostream>

using namespace std;

int main() {
  string s1;
  string s2 = "cheese";
  cout << "gimme str: ";

  getline(cin, s1);
  cout << "s1: " << s1 << "\n\tlength: " << s1.length() << "\n\tcapacity: "
       << s1.capacity() << "\n\tmax size: " << s1.max_size() << endl;

  cout << "s2: " << s2 << "\n\tlength: " << s2.length() << "\n\tcapacity: "
       << s2.capacity() << "\n\tmax size: " << s2.max_size() << endl;

 return 0;
}
