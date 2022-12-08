#include <iostream>
#include <string>
using namespace std;

class MyClass {       // The class
   
  private:             // Access specifier
    int myNum;        // Attribute (int variable)
    
    public:
     MyClass(int num){
        myNum = num;
    } 
    int* getnum()
    {
        return &myNum; 
    }
};

int main() {
  MyClass myObj(2);  // Create an object of MyClass

  int * ptr;
    ptr = myObj.getnum();
  cout <<"value returened by the get function: "<< *(myObj.getnum()) << "\n";
  cout << "reading the private class value from the pointer: "<< *ptr<<endl;
  return 0;
}
