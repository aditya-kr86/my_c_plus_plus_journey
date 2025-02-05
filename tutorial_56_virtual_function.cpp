/*
# Virtual Functions:
1.Declared using the virtual keyword in the base class.
2.Enables runtime polymorphism by allowing derived class functions to override base class functions.
3.Key Behavior:
- Base class pointer pointing to a derived class object calls the derived class function if the base class function is virtual.
4.Use the override specifier in the derived class for clarity.
5.Syntax:
    virtual void functionName();

# Program Behavior:
1. Without virtual:
- Base class function is called.
2. With virtual:
- Derived class function is called if the pointer points to a derived object.
# Output Example:
- Derived class function displays both base and derived variables.

*/
#include<iostream>
using namespace std;

class BaseClass
{
    public:
    int var_base = 1;
    virtual void display(){
        cout<<"1 Displaying Base class variable var_base "<<var_base <<endl;
    }
};

class DerivedClass : public BaseClass
{
    public:
    int var_derived;
    void display(){
        cout<<"2 Displaying Base class variable var_base "<<var_base <<endl;
        cout<<"2 Displaying Derived class variable var_derived "<<var_derived <<endl;
    }
};

int main()
{
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;

    base_class_pointer->display();


    return 0;
}
