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
