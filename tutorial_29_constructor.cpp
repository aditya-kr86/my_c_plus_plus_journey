/*
# Constructors in C++
- Definition:
- A constructor is a special function with the same name as the class.
- It initializes objects and is invoked automatically when an object is created.

# Characteristics:
- No return type.
- Declared in the public section.
- Can have default arguments.
- Cannot refer to their address.

# Default Constructor:
- Takes no parameters.
- Used to assign default values to class members.
*/
#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(void);
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex :: Complex(void)
{
    a = 10;
    b = 0;
}

int main()
{
    Complex c;
    c.printNumber();
    return 0;
}
