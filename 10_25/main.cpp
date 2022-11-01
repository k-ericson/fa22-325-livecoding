#include "BinSearTree.h"
#include <iostream>

using namespace std;

int main() {
  BinSearTree targetTree;
  targetTree.print();
  // targetTree.insert(7);
  // //  targetTree.print();
  // targetTree.insert(700);
  // // targetTree.print();
  // targetTree.insert(711);
  // // targetTree.print();
  // targetTree.insert(712);
  // //targetTree.print();
  // targetTree.insert(3);
  // //targetTree.print();
  // targetTree.insert(-7);
  // //targetTree.print();
  // targetTree.insert(-700);
  // // targetTree.print();
  // targetTree.insert(-6);
  // // targetTree.print();
  // targetTree.insert(703);
  // // targetTree.print();
  // targetTree.insert(800);
  // //  targetTree.print();
  // targetTree.insert(-711);
  // // targetTree.print();
  // targetTree.insert(1);
  // // targetTree.print();
  // targetTree.insert(4);
  // // targetTree.print();
  // targetTree.insert(2);
  // targetTree.print();

  targetTree.insert(30);
  targetTree.insert(17);
  targetTree.insert(37);
  targetTree.insert(11);
  targetTree.insert(10);
  targetTree.insert(31);
  targetTree.insert(19);
  targetTree.insert(38);
  targetTree.print();

  targetTree.deleteNode(17);
  targetTree.print();
  targetTree.deleteNode(31);
  targetTree.print();

  cout << endl << endl;
  
  return 0;
}
