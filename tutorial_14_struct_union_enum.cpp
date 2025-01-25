/*
# Structures in C++
- A structure is a user-defined data type that groups variables of different types.

# Unions in C++
- A union allows multiple variables to share the same memory space.

# Key Points:
- Only one variable can be used at a time.
- The compiler allocates memory equal to the largest data type.
- ⚠️ Accessing other fields after assigning one gives garbage values.

# Enums in C++
Enums are user-defined types for named constants, improving readability.

# Key Points:
Values are auto-assigned as 0, 1, 2....
*/
#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId; //4
    char favChar; //1
    float salary; //4
} ep;

union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};


int main(){
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<(m1==2);
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner; 
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.car;

    // ep harry;
    // struct employee shubham;
    // struct employee rohanDas;
    // harry.eId = 1;
    // harry.favChar = 'c';
    // harry.salary = 120000000;
    // cout<<"The value is "<<harry.eId<<endl; 
    // cout<<"The value is "<<harry.favChar<<endl; 
    // cout<<"The value is "<<harry.salary<<endl; 
    return 0;
}
