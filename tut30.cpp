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