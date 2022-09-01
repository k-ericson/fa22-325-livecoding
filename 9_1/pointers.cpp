
#include <iostream>

using namespace std;

int main() {
  int size;
  cout << "how big?";
  cin >> size;

  int * arr;
  arr = new int[size];

  for (int i = 0; i < size; i++) {
    arr[i] = 8 * i;
  }

  int * billbert;
  billbert = arr;
  cout << "arr: " << arr << "\tbillbert: " << billbert << endl;
  while (billbert < (arr + size)) {
    cout << "billbert: " << billbert << "\t*billbert: " << *billbert << endl;
    billbert++;
  }

  int s_arr[3];
  int * bobbert;
  bobbert = s_arr;
  for (int i = 0; i < 3; i++)
    s_arr[i] = 4 * i;
  cout << "s_arr: " << s_arr << "\tbobbert: " << bobbert << endl;
  while (bobbert < (s_arr + 3)) {
    cout << "bobbert: " << bobbert << "\t*bobbert: " << *bobbert << endl;
    bobbert++;
  }
  
  delete[] arr;
  return 0;
}
