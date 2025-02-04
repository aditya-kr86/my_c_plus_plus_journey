/*
1. Pointers to Objects:
- Store addresses of objects.
- Access members using (*ptr).member .
- Example:
    Complex *ptr = new Complex;
    (*ptr).setData(1, 54);
    (*ptr).getData();
2. Arrow Operator ( -> ):
- Simplifies access to members through pointers.
- Equivalent to (*ptr).member .
- Example:
    ptr->setData(1, 54);
    ptr->getData();

3. Dynamic Object Array:
- Create with new Complex[size]; .
- Access members of the first object using ptr1-> .
- Example:
    Complex *ptr1 = new Complex[4];
    ptr1->setData(1, 4);
    ptr1->getData();
*/
#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }

    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};
int main()
{
    Complex *ptr = new Complex;
    ptr->setData(1, 54);
    ptr->getData();

    // Array of Objects
    Complex *ptr1 = new Complex[4];
    ptr1->setData(1, 4);
    ptr1->getData();
    return 0;
}
