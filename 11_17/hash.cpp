#include <string>
#include <vector>
#include <iostream>

using namespace std;

class hashtable {
private:
  const static int MAX_SIZE=100;
  vector<string> bucket;
public:
  hashtable();
  int max_size();
  unsigned int hash(string key);
  string& operator[](string key);
};



int main() {
  hashtable ht;

  cout << ht.hash("John Doe") << endl;
  cout << ht.hash("Seven, spelled out, yea") << endl;

  ht["John Doe"] = "Stringy string";
  ht["Seven, spelled out, yea"] = "it is";
  ht["neveS"] = "NO";
  ht["one more"] = "is done";

  cout << ht["John Doe"] << endl;
  cout << ht["Seven, spelled out, yea"] << endl;
  cout << ht["neveS"] << endl;
  cout << ht["one more"] << endl;
  cout << ht["7"] << endl;
  
  return 0;
}

hashtable::hashtable() {
  bucket.resize(MAX_SIZE);
}

unsigned int hashtable::hash(string key) {
  unsigned int number = 0;
  int i = 0;

  while(key[i]) {
    number = number * 101 + int(key[i]);
    i++;
  }

  return number;
}

string& hashtable::operator[](string key) {
  unsigned int index = hash(key) % MAX_SIZE;

  return bucket[index];
}
