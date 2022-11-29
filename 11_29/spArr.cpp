//sparse array ADT based on standard linked list
//indexed by integer, storing integer data

#include <iostream>
#include <list>

using namespace std;

class SA {
private:
  struct ArrayData {
    int index;
    int data;
  };

  list<ArrayData> data;
  int default_value;

public:
  SA();
  SA(int value); //acts as default value
  int& operator[](int idx);
  int length(); //not max index, list length
  bool exists(int index); //true if value at index, false otherwise
};

SA::SA() {
  default_value = 0;
}

SA::SA(int value) {
  default_value = value;
}

int SA::length() {
  return data.size();
}

bool SA::exists(int index) {
  std::list<ArrayData>::iterator it = data.begin();

  while(it != data.end()) {
    if (it->index == index)
      return true;
    it++;
  }
  return false;
}

int& SA::operator[](int index) {
  std::list<ArrayData>::iterator it = data.begin();

  ArrayData tmp;
  tmp.index = index;
  tmp.data = default_value;

  while( it != data.end()) {
    //found!
    if(it->index == index) {
      return it->data;
    }
    //too far
    else if (it->index > index) {
      return data.insert(it, tmp)->data;
    }
    it++;
  }
  //goes at the back
  data.push_back(tmp);
  it = data.end();
  it--;
  return it->data;
}

int main() {
  SA spaArrr(7);

  spaArrr[5] = 3;
  spaArrr[11000];
  cout << "spaArrr[5]: " << spaArrr[5] << endl;
  cout << "spaArrr[200]: " << spaArrr[200] << endl;
  cout << "spaArrr[11000]: " << spaArrr[11000] << endl;

  cout << "array length: " << spaArrr.length() << endl;
  cout << "printing: " << endl;
  for (int i = 0; i < 11001; i++) {
    if (spaArrr.exists(i)) {
      cout << i << ": " << spaArrr[i] << endl;
    }
  }
  return 0;
}
 
  
