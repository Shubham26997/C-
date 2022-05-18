#include <iostream>
using namespace std;
int main() {
  cout << "Hello World!\n";
  int a = 5;
  int *p = &a; // here we create a pointer p in which we store the address of a

  cout << a << endl; // print value of a
  //cout << *a << endl; // try to print pointer a i.e 5 is some address this we
  // are saying to compiler but let see what error it give indirection error.
  cout << p << endl;  // print value store in p i.e address of a
  cout << *p << endl; // print the value which is at the address stored in p
  cout << &a << endl; // print address of a
}