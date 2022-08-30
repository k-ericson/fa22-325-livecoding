/**
 * @file hello.cpp
 * @author Kathleen Ericson
 * @date 2022-08-25
 * @brief livecoding example 8/22
 * 
 * Livecoding examples for CSCI 325 8/25
 */


#include <iostream>
#include "Cat.h"

using namespace std;


/**
 * finds the factorial of provided number
 *
 * @param int num number to find factorial of
 * @pre num is positive
 * @return int factorial of provided num
 * 
 */
int fact(int num);

int main() {
  cout << "Hello world!!!!!" << endl;
  cout << "what num?" << endl;
  int num;
  cin >> num;
  cout << "fact is: " << fact(num) << endl;

  Cat c1;
  Cat c2("cleve", 1, "pink");
  c1.printCat();
  c2.printCat();

  double * billy;
  double x = 12;
  billy = &x;
  cout << "billy: " << billy << endl;
  cout << "billy*: " << *billy << endl;

  cout << "&billy: " << &billy << endl;
  
  return 0;
}

int fact(int num) {
  if (num == 0)
    return 1;
  return num * fact(num - 1);
}
