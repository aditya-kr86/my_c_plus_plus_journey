/*
#Parameterized & Default Constructors
1.Default Constructor:
- Takes no parameters.
- Automatically invoked to initialize members with default values.

2.Parameterized Constructor:
- Takes one or more parameters.
- Used to initialize objects with specific values.

3.Characteristics:
- No return type.
- Declared in the public section.*/

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int); // Constructor dec;leration
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex :: Complex(int x, int y)    // ----> This is a parameterized constructor as it takes no parameter
{
    a = x;
    b = y;
}

int main()
{
    // Implicit Call
    Complex a(4,9);

    // Explicit Call
    Complex b= Complex(5,7);
    a.printNumber();
    b.printNumber();
    return 0;
}
