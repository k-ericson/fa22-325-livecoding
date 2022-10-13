
#include <iostream>

using namespace std;

int main() {
  int *r = new int[4];
  for (int i = 0; i < 4; i++) {
    r[i] = i + 1;
  }
  cout << "r[1]: " << r[1] << "\t*(r+1): " << *(r + 1) << endl;

  int arr[4];
  for (int i = 0; i < 4; i++) {
    arr[i] = (i + 1) * 2;
  }
  int *p = arr;
  cout << "p[9]: " << p[9] << "\t*(p + 9): " << *(p + 9) << endl;

  cout << "sizeof(int): " << sizeof(int) << endl;
  cout << "sizeof(double): " << sizeof(double) << endl;
  cout << "sizeof(int*): " << sizeof(int*) << endl;
  cout << "sizeof(double*): " << sizeof(double*) << endl;

  cout << "sizeof(int**): " << sizeof(int**) << endl;
 

  
  delete[] r;
  return 0;
}
