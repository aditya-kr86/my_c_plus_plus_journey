/*
# What are Templates with Multiple Parameters?
- A template can accept multiple data types using <class T1, class T2>.

# Syntax
    template <class T1, class T2>
    class ClassName {
        T1 var1;
        T2 var2;
    };

# Example
    template <class T1, class T2>
    class myClass {
        T1 data1;
        T2 data2;
    };

# Advantages
- Supports multiple data types dynamically
- Reduces code duplication
- Increases flexibility and efficiency
*/

#include<iostream>
using namespace std;


template <class T1, class T2>
class myClass
{
    public:
    T1 data1;
    T2 data2;

    myClass(T1 a, T2 b){
        data1 = a;
        data2 = b;
    }
    void display(){
        cout<<this->data1 <<endl <<this->data2 <<endl;
    }
};

int main()
{
    myClass<float, char> obj(1.9, 'c');
    obj.display();
    return 0;
}
