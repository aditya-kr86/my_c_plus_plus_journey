/*
Pointers to Derived Classes in C++:
1. Base Class Pointer:
- Can point to a derived class object.
- Cannot access derived class members.
- Calls base class functions.

2. Derived Class Pointer
- Can point to a
- derived class object
- Can access both base and derived class members
- Calls derived class functions

3. Key Behavior
- Base class pointer
- only works with base class members
- Derived class pointer allows access to all members and overrides base class functions.
*/
#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying Base class variable var_base " << var_base << endl;
        cout << "Displaying Derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;

    base_class_pointer->var_base = 36;

    // base_class_pointer->var_derived = 36; /* Will throw an Error */
    base_class_pointer->display();

    base_class_pointer->var_base = 132;
    base_class_pointer->display();

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;

    derived_class_pointer->var_derived = 86;
    derived_class_pointer->display();

    // obj_derived.display();
    return 0;
}
