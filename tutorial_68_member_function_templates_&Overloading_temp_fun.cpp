/*
# Member Function Templates
- Used to define class member functions as templates.
- Can be defined inside or outside the class using ::.

# Example: Function Inside the Class
    template <class T>
    class Harry {
    public:
        T data;
        Harry(T a) { data = a; }
        void display() { cout << data; }
    };

# Example: Function Outside the Class
    template <class T>
    class Harry {
    public:
        T data;
        Harry(T a) { data = a; }
        void display();
    };
        
    template <class T>
    void Harry<T>::display() { cout << data; }

# Overloading Template Functions
- Function overloading means same function name but different parameters.
- Template function overloading allows:
    a.Normal function (exact match priority).
    b.Generic template function.

# Example: Overloading a Function Template
    void func(int a) {
        cout << "I am first func() " << a << endl;
    }
    template<class T>
    void func(T a) {
        cout << "I am templatised func() " << a << endl;
    }


# Calling func() with an Integer (Exact Match Exists)
    int main() {
        func(4);  // Calls the normal function (higher priority)
    }

# Output:
    I am first func() 4

# Calling func() with a Character (No Exact Match)
    int main() {
        func('A');  // Calls the template function
    }
# Output:
    I am templatised func() A
- Rule: Exact match (non-template function) is always prioritized!
*/
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
