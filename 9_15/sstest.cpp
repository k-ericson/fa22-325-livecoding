#include <sstream>
#include <iostream>

using namespace std;

int main() {
  stringstream ss;

  ss << 500 << ' ' << 4.32 << " cat?";

  string mstr = ss.str();

  cout << mstr << endl;

  int f;
  double g;
  string k;

  ss >> f >> g >> k;
  cout << "f: " << f << "\ng: " << g << "\nk: " << k << endl;

  ss << f << g << k;
  mstr = ss.str();
  cout << "mstr: " << mstr << endl;

  string v = "12 -43 tree";
  stringstream ss2(v);
  int x, y;
  ss2 >> x >> y;
  cout << "x: " << x << "\ny: " << y;
  string z;
  ss2 >> z;
  string sd = ss2.str();
  cout << "\nz: " << z << endl;
  cout << "sd: " << sd << endl;
  v += " pear";
  sd = ss2.str();
  cout << "sd again: " << sd << endl;
  
  return 0;
}
