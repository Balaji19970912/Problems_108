#include <iostream>
using namespace std;

int main() 
{
    cout<<"Perform Mathematical Operations"<<endl;
    cout<<"1. Addition"<<endl<<"2. Subtraction"<<endl<<"3. Multiplication"<<endl<<"4. Division"<<endl<<"5. Modulo"<<endl;
    
    int choice = 5;
    int a = 10, b = 20;
    
    switch(choice) {
      case 1: cout<<"The Addition of "<<a<<" and "<<b<<" is = "<<(a+b)<<endl;
      break;
      case 2: cout<<"The Subtraction of "<<a<<" and "<<b<<" is = "<<(a-b)<<endl;
      break;
      case 3: cout<<"The Multiplication of "<<a<<" and "<<b<<" is = "<<(a*b)<<endl;
      break;
      case 4: cout<<"The Division of "<<a<<" and "<<b<<" is = "<<(a/b)<<endl;
      break;
      case 5: cout<<"The Modulo of "<<a<<" and "<<b<<" is = "<<(a%b)<<endl;
      break;
      default: cout<<"Invalid Option!"<<endl;
    }
    
    return 0;
}
