/*
## Polymorphism in C++:
# Definition: One name, multiple forms.
# Types:
    a. Compile-Time Polymorphism (Early Binding):
    Resolved during compilation.
        - Examples:
        - Function Overloading: Same function name, different parameter lists.
    Operator Overloading: Custom functionality for operators.
b. Run-Time Polymorphism (Late Binding):
    - Resolved during runtime.
    - Achieved using virtual functions.
# Virtual Function
- Declared using virtual keyword in the base class.
- Overridden in the derived class.
- Enables dynamic binding for function calls.
*/
#include <iostream>
using namespace std;

class Base
{
public:
    virtual void display()
    {
        cout << "Base class display" << endl;
    }
};

class Derived : public Base
{
public:
    void display() override
    {
        cout << "Derived class display" << endl;
    }
};

int main()
{
    Base *basePtr;
    Derived derivedObj;
    basePtr = &derivedObj;
    basePtr->display(); // Outputs: "Derived class display"
    return 0;
}
