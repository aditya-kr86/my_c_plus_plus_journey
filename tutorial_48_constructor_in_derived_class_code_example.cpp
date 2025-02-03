/*
1. Execution Order:
- Single Inheritance: Base -> Derived.
- Multiple Inheritance: Constructors execute in order of inheritance.
- Virtual Base Class: Virtual base constructor executes first.
2. Parameterized Constructor in Derived Class:
- Use initialization lists to call base class constructors:
- Derived(int a, int b) : Base1(a), Base2(b) {}
3. Important Notes:
- Constructors for all base classes are called automatically.
- Order of inheritance affects constructor execution sequence.
*/

#include <iostream>
using namespace std;

/*
case 1:
class B : public A{
 A-->B //Order of Execution
}
case 2:
class A : public B, public C{
 B-->C-->A //Order of Execution
}
case 2:
class A : public B,virtual public C{
 C-->B-->A //Order of Execution
}

*/

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called" << endl;
    }

    void printDataBase1(void)
    {
        cout << "the value of data1 is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called" << endl;
    }

    void printDataBase2(void)
    {
        cout << "the value of data2 is " << data2 << endl;
    }
};

class Derived: public Base1,public Base2{
    int derived1, derived2;
    public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b){
        derived1 = c;
        derived2 = d;
        cout<<"The Dervied Class constructor is called" <<endl;
    }
    void printDataDerived(void)
    {
        cout<<"The value of derived1 is "<< derived1 <<endl;
        cout<<"The value of derived2 is "<< derived2 <<endl;
    }
};

int main()
{
    Derived d(1,2,3,4);
    d.printDataDerived();
    d.printDataBase1();
    d.printDataBase2();
    return 0;
}
