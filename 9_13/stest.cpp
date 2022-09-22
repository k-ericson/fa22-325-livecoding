
#include <iostream>

using namespace std;


/**
 * holds a frog
 *
 * @class frog stest.cpp "9_13/stest.cpp"
 * @brief froggie
 *
 */
struct frog {
  string name;
  double leg_len;
  int age;
};

int main() {
  frog f;
  f.name = "Frogger";
  f.leg_len = 7.87;
  f.age = 7;
  cout << "name: " << f.name << "\tLeg Length: " << f.leg_len << "\n\tAge: "
       << f.age << endl;
  
  return 0;
}
