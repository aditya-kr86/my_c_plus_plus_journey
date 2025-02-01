/*
## Multiple Inheritance:
1. A derived class inherits from more than one base class.
2. Syntax:
    class Derived : visibility-mode Base1, visibility-mode Base2 {
        // Class body
    };

## Code Example:
1. Base Classes:
- Base1 → Protected: base1int, Function: set_base1int().
- Base2 → Protected: base2int, Function: set_base2int().
- Base3 → Protected: base3int, Function: set_base3int().

2. Derived Class:
- Inherits Base1, Base2, and Base3.
- Public function show():
- Prints base1int, base2int, and base3int.
- Calculates and prints their sum.

3. Main Function:
- Create Derived object.
- Call functions to set values.
- Call show() to display results.

## Output:
Displays:
- Values of base1int, base2int, base3int.
- Sum of these values.
 */

#include <iostream>
using namespace std;

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout <<"The value of base1 is "<< base1int << endl;
        cout <<"The value of base2 is "<< base2int << endl;
        cout <<"The Sum of these values is"<< base1int + base2int << endl;
    }
};

int main()
{
    Derived harry;
    harry.set_base1int(25);
    harry.set_base2int(5);
    harry.show();
    return 0;
}
