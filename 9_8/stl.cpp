
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> vec;
 cout << "vec.size(): " << vec.size() << "\nvec.capacity(): " << vec.capacity() << endl;

 //vec.reserve(10);
  cout << "vec.size(): " << vec.size() << "\nvec.capacity(): " << vec.capacity() << endl;

  for (int i = 0; i < 268435456; i++) {
    vec.push_back(i);
    cout << "vec.size(): " << vec.size() << "\nvec.capacity(): " << vec.capacity() << endl;
    //cin.get();
  }

  vec.shrink_to_fit();
  cout << "vec.size(): " << vec.size() << "\nvec.capacity(): " << vec.capacity() << endl;

  cout << "vec Contents: " << endl;
  for (uint i = 0; i < vec.size(); i++) {
    cout << vec[i] << " ";
  }
  cout << endl;

  vector<int> frie;
  cout << "frie.size(): " << frie.size() << "\nfrie.capacity(): " << frie.capacity() << endl;
  frie = vec;
  cout << "frie.size(): " << frie.size() << "\nfrie.capacity(): " << frie.capacity() << endl;
  frie[2] = -13;

  cout << "vec Contents: " << endl;
  for (uint i = 0; i < vec.size(); i++) {
    cout << vec[i] << " ";
  }
  cout << endl;

  cout << "frie Contents: " << endl;
  for (uint i = 0; i < frie.size(); i++) {
    cout << frie[i] << " ";
  }
  cout << endl;

  cout << "frie Contents (part II): " << endl;
  vector<int>::iterator it;
  for (it = frie.begin(); it != frie.end(); it++) {
    *it += 1;
    cout << *it << " ";
    
  }
  cout << endl;
  for (int i:frie) {
    cout << i << " ";
  }
  
  return 0;
}
