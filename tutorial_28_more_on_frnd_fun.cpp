/*
# Friend Functions Overview
- Definition: Functions that can access private/protected members of a class.
- Declared with the friend keyword inside the class.
- Not part of the class but has access to its members.

# Friend Function Example 1
- Friend function add() accesses private members of two different classes (X and Y).
- Forward declaration of class Y is required for defining class X.

# Friend Function Example 2
- Friend function exchange() swaps values between objects of two classes (c1 and c2).
- Forward declaration of class c2 is required for defining class c1.

# Usage Notes
- Use friend functions for tight coupling between classes when private data needs to be accessed directly.
- Avoid overuse to maintain encapsulation principles.
*/

#include <iostream>
using namespace std;
// Forwars Deceleration of frind function
class Y;
class X
{
    int data;

public:
    void setvalue(int value)
    {
        data = value;
    }
    friend void add(X, Y);
};

class Y
{
    int num;

public:
    void setvalue(int value)
    {
        num = value;
    }
    friend void add(X, Y);
};

void add(X o1, Y o2)
{
    cout << "Summing data of X and Y objects gives me " << o1.data + o2.num;
}

int main()
{
    X a1;
    a1.setvalue(3);

    Y b1;
    b1.setvalue(5);

    add(a1,b1);

    return 0;
}
