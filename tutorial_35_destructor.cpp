/*
# Destructor in C++

1. Definition:
- Special member function automatically invoked when an object is destroyed.
- Syntax: ~ClassName() {  code  }

2. Characteristics:
- No arguments, no return type.
- Automatically called when:
- Object goes out of scope.
- Program ends.
- Dynamically allocated object is deleted.
- Used for cleanup (e.g., releasing memory, closing files).

3. Code Example:
    class num {
        static int count;
    public:
        num() { count++; cout << "Constructor called for " << count << endl; }
        ~num() { cout << "Destructor called for " << count << endl; count--; }
    };

4. Behavior:
- Creation: Constructor runs when objects are created.
- Destruction: Destructor runs in reverse order when objects go out of scope.
*/
#include<iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value 
int count=0;

class num{
    public:
        num(){
            count++;
            cout<<"This is the time when constructor is called for object number"<<count<<endl;
        }

        ~num(){
            cout<<"This is the time when my destructor is called for object number"<<count<<endl;
            count--;
        }
};


int main(){
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2, n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}
