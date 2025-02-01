/*
1. Ambiguity in Inheritance:
- Occurs when a derived class inherits multiple base classes with functions having the same name.
- Resolved using the scope resolution operator (::).
- 
2. Example 1: Multiple Inheritance
- Base1 and Base2 have greet() functions.
- Derived resolves ambiguity by calling Base2::greet() explicitly.

3. Example 2: Method Overriding in Single Inheritance
- A derived class overrides a base class function by redefining it.
- If the function is not overridden, the base class function is used.

4. Key Points:
- Scope resolution operator specifies which base class function to call.
- Method overriding happens by default when a derived class has the same function as its base class.
*/

#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are You." << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho ??" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base1::greet();
    }
};

class B
{
public:
    void say()
    {
        cout << "Hello My Beautiful People"<<endl;
    }
};

class D : public B
{
    int a;
    // D's new say() method will override base class's say()  method
public:
    void say()
    {
        cout << "You are most Beautiful People of today i saw"<<endl;
    }
};

int main()
{
    // Ambiguity 1
    // Base1 bas1obj;
    // Base2 bas2obj;
    // bas1obj.greet();
    // bas2obj.greet();
    // Derived d;
    // d.greet();

    // Ambiguity 2
    B b;
    b.say();
    D d;
    d.say();
    return 0;
}
