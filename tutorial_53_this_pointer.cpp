/*
# Definition:
- this pointer: Implicit pointer in every non-static member function pointing to the invoking object.
# Basic Example:
    class A {
    int a;
    public:
    void setData(int a) { this->a = a; }
    void getData() { cout << "Value: " << a << endl; }
    };

- this->a : Refers to the class member a .
# Chaining Example:
- setData() returns *this for chaining: obj.setData(4).getData();
# Benefits
- Resolves name confl icts (e.g., this->a = a)
- Enables method chaining for concise code.
*/
#include <iostream>
using namespace std;
class A
{
    int a;

public:
    void setData(int a)
    {
        this->a = a;
    }

    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};
int main()
{
    A a;
    a.setData(4);
    a.getData();
    return 0;
}
