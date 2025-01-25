/*
# Functions in C++
- Functions break code into reusable pieces, promoting modularity and clarity.
- sum is a function that takes two integers (a and b), adds them, and returns the result (c).
- Functions can accept parameters (inputs) and return values.
- num1 and num2 are actual parameters passed to the function sum.
- The function performs addition and returns the result.

# Function Prototypes
- A function prototype declares a function before its definition, helping the compiler recognize it.
- Prototype specifies the function name, return type, and parameter types.
- Parameters can be named or unnamed in prototypes.

# Types of Parameters
- Formal Parameters: Declared in the function definition (e.g., int a, int b in sum).
- Actual Parameters: Passed during function calls (e.g., num1, num2 in sum(num1, num2)).

# Void Functions
- Functions without a return value or parameters:
- void means the function doesn’t return anything.
*/

#include<iostream>
using namespace std;

// Function prototype
// type function-name (arguments);
// int sum(int a, int b); //--> Acceptable
// int sum(int a, b); //--> Not Acceptable 
int sum(int, int); //--> Acceptable 
// void g(void); //--> Acceptable 
void g(); //--> Acceptable 

int main(){
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    // num1 and num2 are actual parameters
    cout<<"The sum is "<<sum(num1, num2);
    g();
    return 0;
}

int sum(int a, int b){
    // Formal Parameters a and b will be taking values from actual parameters num1 and num2.
    int c = a+b;
    return c;
}

void g(){
    cout<<"\nHello, Good Morning";
}
