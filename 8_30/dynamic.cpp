/**
 * @file dynamic.cpp
 * @author Kathleen Ericson
 * @date 2022-08-30
 * @brief practicing dynamic memory
 * 
 * Working with dynamic arrays, passing to functions, and documentation
 */


#include <iostream>

using namespace std;


/**
 * does stuff to a dynamic array of ints
 *
 * @param int * mine the dynamic array which we will be doing things too
 * @param int size the size of the array
 * @pre mine has been fully initialized
 * @post stuff has been done
 * 
 */
void doStuff(int * mine, int size);

int main() {
  int * arr = nullptr;
  cout << "How big? ";
  int s;
  cin >> s;
  arr = new int[s];

  doStuff(arr, s);

  delete[] arr;
  
  return 0;
}

void doStuff(int * mine, int size) {
  int tot = 0;
  for (int i = 0; i < size; i++) {
    tot += mine[i];
  }

  cout << "Total: " << tot << endl;
}
