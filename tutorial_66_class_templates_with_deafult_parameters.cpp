/*
# What are Class Templates with Default Parameters?
- A template can have default data types, just like default function arguments.

Syntax
    template <class T1 = int, class T2 = float, class T3 = char>
    class ClassName {
        T1 var1;
        T2 var2;
        T3 var3;
    };

Example
    template <class T1 = int, class T2 = float, class T3 = char>
    class Harry {
        T1 a;
        T2 b;
        T3 c;
    };

Advantages
- Allows flexibility when specifying types.
- Prevents errors if no data type is given.
- Reduces code duplication and improves readability.
*/
#include<iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class Aditya
{
    public:
    T1 a;
    T2 b;
    T3 c;
    Aditya(T1 x, T2 y, T3 z){
        a = x;
        b = y;
        c = z;
    }
    void display(){
        cout<<"The value of a is "<<a <<endl;
        cout<<"The value of b is "<<b <<endl;
        cout<<"The value of c is "<<c <<endl;
    }
};

int main()
{
    Aditya <> h(4,6.4,'A');
    h.display();
    cout<<endl;
    Aditya <float, char, char> h1(4.9,'G' ,'A');
    h1.display();
    return 0;
}
