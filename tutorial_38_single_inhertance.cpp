/*
# Single Inheritance
1. One base class and one derived class.
2. Base class members:
- Private: Not inherited.
- Public: Inherited (access depends on visibility mode).

# Base Class Code
    class Base {
        int data1; // Not inherited
    public:
        int data2; // Inherited
        void setData(); // Initializes data
        int getData1(); // Returns data1
        int getData2(); // Returns data2
    };

# Derived Class Code
    class Derived : public Base {
        int data3; // Private member
    public:
        void process(); // Calculates data3
        void display(); // Prints data1, data2, data3
    };

# Main Program
    int main() {
        Derived obj;
        obj.setData();  // Initialize data
        obj.process();  // Calculate data3
        obj.display();  // Display values
    }

# Output
    Value of data1: 10
    Value of data2: 20
    Value of data3: 200
*/
#include <iostream>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void Base ::setdata(void)
{
    data1 = 10;
    data2 = 20;
}

int Base ::getdata1(void)
{
    return data1;
}

int Base ::getdata2(void)
{
    return data2;
}

class Derived : public Base
{
    int data3;

public:
    void process();
    void display();
};

void Derived :: process()
{
    data3 = data2 * getdata1();
}

void Derived :: display(){
    cout<<"Value of data 1 is "<<getdata1() <<endl;
    cout<<"Value of data 2 is "<<data2 <<endl;
    cout<<"Value of data 3 is "<<data3 <<endl;
}
int main()
{
    Derived der;
    der.setdata();
    der.process();
    der.display();
    return 0;
}

// Private 

/*
#include <iostream>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void Base ::setdata(void)
{
    data1 = 10;
    data2 = 20;
}

int Base ::getdata1(void)
{
    return data1;
}

int Base ::getdata2(void)
{
    return data2;
}

class Derived : private Base
{
    int data3;

public:
    void process();
    void display();
};

void Derived :: process()
{
    setdata();
    data3 = data2 * getdata1();
}

void Derived :: display(){
    cout<<"Value of data 1 is "<<getdata1() <<endl;
    cout<<"Value of data 2 is "<<data2 <<endl;
    cout<<"Value of data 3 is "<<data3 <<endl;
}
int main()
{
    Derived der;
    // der.setdata();
    der.process();
    der.display();
    return 0;
}
*/
