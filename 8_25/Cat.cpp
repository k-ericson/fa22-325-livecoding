/**
 * @file Cat.cpp
 * @author Kathleen Ericson
 * @date 2022-08-25
 * @brief Cat Implementation
 * 
 * Implementation of the cat class
 */

#include "Cat.h"
#include <iostream>

using namespace std;

Cat::Cat() {
  name = "Dog";
  age = 99;
  color = "yellow";
}

Cat::Cat(string name, int age, string color) {
  this->name = name;
  this->age = age;
  this->color = color;
}

void Cat::printCat() {
  cout << "name: " << name
       << "\tage: " << age
       << "\tcolor: " << color
       << endl;
}
