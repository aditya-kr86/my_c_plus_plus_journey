/*
# Inheritance Syntax
    class Derived : visibility-mode Base {
        // Members/Methods
    };


# Visibility Modes:
1. Public:
- Public → Public in derived class.
2. Private:
- Public → Private in derived class.
3. Default:
- Private, if not specified.
4. Private Members:
- Not inherited.

# Example:
    class Employee {
    public:
        int id;
        float salary;
    };
    class Programmer : public Employee {
        int languageCode;
    };


# Key Points:
- Use constructors for initialization.
- Derived class inherits public and protected members, not private ones.
*/

#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode<<endl;
    cout << skillF.id<<endl;
    skillF.getData();
    return 0;
}
