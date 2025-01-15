// Mutliple Ingeritance

#include <iostream>
using namespace std;

/* Syntax for inheriting in multiple inheritance
class Derived: visibility-model  base1;, visibility-mode base2
{
    Class body of class "Derived"
};
*/
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

/*  The inherited derived class will loook like this:
Data Members:
    base1int --> protected
    base2int --> protected

Member Function:
    set_base1int ---> public
    set_baseint ---> public
    show ---> public
*/
int main()
{
    Derived harry;
    harry.set_base1int(25);
    harry.set_base2int(5);
    harry.show();
    return 0;
}
