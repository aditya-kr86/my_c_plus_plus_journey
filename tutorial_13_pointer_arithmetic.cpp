/*
## Arrays & Pointer Arithmetic in C++
# Arrays in C++
- An array is a collection of similar data types stored in contiguous memory locations.
- Syntax:
  int marks[4] = {23, 45, 56, 89};
  cout << marks[0] << endl;  // Accessing elements
  
# Key Points:
- Array indexes start from 0.
- Data is stored in a continuous memory block.

# Pointers and Arrays
- The name of an array is a pointer to its first element.
- marks gives the address of the first index.
- &marks is incorrect.

# Pointer to Array:
- int* p = marks;  
- cout << *p;  // Value at first index

# Pointer Arithmetic:
- Incrementing the pointer moves to the next index.
- cout << *(p + 1);  // Value at index 1
- cout << *(p + 2);  // Value at index 2

*/
#include<iostream>
using namespace std;

int main(){
    // Array Example
    int marks[] = {23, 45, 56, 89};

    int mathMarks[4];
    mathMarks[0] = 2278;
    mathMarks[1] = 738;
    mathMarks[2] = 378;
    mathMarks[3] = 578;

    cout<<"These are math marks"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

    // You can change the value of an array
    marks[2] = 455;
    cout<<"These are marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }

    // Quick quiz: do the same using while and do-while loops?

    // Pointers and arrays
    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    // cout<<"The value of *p is "<<*p<<endl;
    // cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is "<<*(p+3)<<endl; 
    
    return 0;
}
