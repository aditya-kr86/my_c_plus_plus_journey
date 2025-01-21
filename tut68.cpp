#include<iostream>
using namespace std;

template<class T>
class Aditya
{
    public:
    T data;
    Aditya(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Aditya <T> :: display(){
    cout<<"The data is : "<<data;
}

void func(int a){
    cout<<"I am first func() " << a <<endl;
}

template <class T>
void func(T a){
    cout<<"This is templatized function func() " << a <<endl;
}

int main()
{
    Aditya<int > a(5);
    cout<<a.data <<endl;
    a.display();

    // func(4);
    // func<char>('X');




    return 0;
}