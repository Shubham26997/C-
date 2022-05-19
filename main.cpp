#include <iostream>
using namespace std;
int main() {
  cout << "Hello World!\n";

  // Used pointer for simple int
  cout << "Starting with pointers!!" << endl;
  int a = 5;
  int *p = &a; // here we create a pointer p in which we store the address of a

  cout << a << endl; // print value of a
  // cout << *a << endl; // try to print pointer a i.e 5 is some address this we
  // are saying to compiler but let see what error it give indirection error.
  cout << p << endl;  // print value store in p i.e address of a
  cout << *p << endl; // print the value which is at the address stored in p
  cout << &a << endl; // print address of a
  // print size of p it depends on the system may be 4 or 8 but irrespective of
  // the data type it will be always be of same size.
  cout << "Size of pointer is always fix depending on the system: " << sizeof(p)
       << endl;
  cout << "That's it for simple pointers" << endl;

  // create a dangling pointer:
  /*
  Dangling pointers are need to be avoided as this are very dangerous why
  because they point to the address automatically and this may result to a very
  large conflict. This also mean that it point to a memory location which is deallocated. 
*/
  // cout << "Starting with dangling!!" << endl;
  // int *dangling;
  // // this is a dangling pointer which is not pointing to any object according to
  // // me but internally it may point to some specific random address.
  // cout << dangling << endl; // Print value stored in danling.
  // cout << *dangling
  //      << endl; // Print value stored at the address stored in dangling
  // cout << &dangling << endl; // Print address of dangling
  // cout << "That's it for dangling so don't use this as this is not a good "
  //         "practice!! "
  //      << endl;

  // If you need to use null pointer you can proceed like this
  int s = 26;   // created a variable which need to  be used.
  int *ptr = 0; // created a null pointer
  ptr = &s;     // now pointer is storing the address of s.

  cout << "Starting with pointers in array!!" << endl;
    //In array for C++ the first index is the base address of the array and each array is at the contiguous memory location so next will be at 104 address if first is at 100 address.
    int arr[] = {2,6,84,21,4};

    // Both produce the same address as this is called self-referencing
    cout << arr << endl; //Print the address of the array arr.
    cout << &arr << endl; // Print the address of the array arr.
/*
    arr = pointer to the first element
    &arr = pointer to the whole array if int arr[5] so this will be pointing to the whole array of size 5 
    So, when we print arr and &arr they both point to same address location since array is at continous memory location so they both point to same address hence printed the same address.
*/
    // cout << arr+1 << endl;
    // cout << &arr+1 << endl;
    cout << *arr << endl; // Print value at the address of arr[0] since in case of arrays *arr == *(arr+0)

    cout << 2[arr] << endl; // Since the array is a pointer so *(arr+i) == *(i+arr) where i is index of the array so this mean we can access any element of the array with index[arr] too in c++.

    
}