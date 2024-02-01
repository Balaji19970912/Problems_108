#include <iostream>
using namespace std;

int main() {
  int value = 5;
  int *ptr;
  ptr = value;
  cout<<"Value of PTR = "<<*ptr<<endl;
  cout<<"Address of PTR = "<<&ptr<<endl;
  cout<<"Address of PTR = "<<ptr<<endl;
  return 0;
}
