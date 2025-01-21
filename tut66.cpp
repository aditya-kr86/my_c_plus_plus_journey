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