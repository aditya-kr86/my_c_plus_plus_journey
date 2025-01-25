/*
# What is a Pointer?
- A pointer is a data type that holds the address of another variable.
- Operators:
  & → Address of operator.

  * → Dereference operator (value at address).

# Key Points:
- b holds the address of a.
- *b gives the value at the address stored in b (value of a).

# Pointer to Pointer
- A Pointer to Pointer stores the address of another pointer.
*c gives the address stored in b.
**c gives the value at the address stored in b (value of a)

*/
#include<iostream>
using namespace std;

int main(){
    // What is a pointer? ----> Data type which holds the address of other data types
    int a=3;
    int* b;
    b = &a;

    // & ---> (Address of) Operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // * ---> (value at) Dereference operator
    cout<<"The value at address b is "<<*b<<endl;

    // Pointer to pointer
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl; 
    cout<<"The value at address c is "<<*c<<endl; 
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl; 

    return 0;
}
