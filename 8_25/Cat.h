/**
 * @file Cat.h
 * @author Kathleen Ericson
 * @date 2022-08-25
 * @brief definition of a Cat
 * 
 * hopefully nothing too horrifying
 */

#ifndef CAT_H
#define CAT_H
#include <string>


/**
 * definition of a Cat
 *
 * @class Cat Cat.h "8_25/Cat.h"
 * @brief a Cat
 *
 */
class Cat {
private:
  std::string name;
  int age;
  std::string color;
public:

/**
 * Default constructor
 *
 * @param  makes a cat
 * @return Cat(); creates a new, default cat
 * @post a cat has been made 
 * 
 */
  Cat();

/**
 * parameterized constructor
 *
 * @param string name name of cat
 * @param int age age of cat
 * @param string color color of cat
 * @post new, parameterized cat has been made
 * 
 */
  Cat(std::string name, int age, std::string color);

/**
 * prints out cat
 *
 * @param  cat to console
 * @post cat has been printed to console
 * 
 */
  void printCat();
};

#endif //CAT_H
