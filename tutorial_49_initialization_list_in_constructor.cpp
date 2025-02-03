/*
1. Syntax:
    Constructor(args) : member1(value1), member2(value2) {
    // Constructor body
    }
2. Execution:
- Members are initialized before the constructor body executes.
- Order of initialization follows the declaration order in the class.
3. Advantages:
- Avoids redundant initialization.
- Required for const, reference, and base class constructors.
4. Examples:
- Simple Initialization: : a(i), b(j)
- Correct Order: : a(i), b(a + j)
- Error: : b(j), a(i + b)
5. Usage: Essential for const, references, and complex base class constructors.
*/
#include<iostream>
using namespace std;

class Test
{
    int a;
    int b;

public:
    Test(int i, int j) : a(i), b(j)
    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4, 6);
    return 0;
}
