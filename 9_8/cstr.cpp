
#include <iostream>

using namespace std;

const int INT_MAX = 100;

int main() {
  char str[INT_MAX];
  char hello[] = {'H','e','l','l','o','!'};
  char hello2[] = "Hello!";
  hello2[0] = 'J';
  
  cout << "str: " << str << "\nhello: " << hello << "\nhello2: " << hello2
       << endl;
  

  
  return 0;
}
