/*
1. Classes vs. Structures:
- Structures: All members are public; no data hiding or functions.
- Classes: Allow data hiding and include functions.

2. Access Modifiers:
- Public: Accessible everywhere.
- Private: Accessible only within the class.

3. Important Syntax:
- Class Definition:
    class ClassName {
    private:
        // Private members
    public:
        // Public members
    };
- Defining Functions Outside Class:
    void ClassName::FunctionName() {
        // Function definition
    }

4. Example Highlights:
- Use setData to assign private members.
- Use getData to display all member values.
*/

#include<iostream>
using namespace std;

class Employee
{
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1); // Declaration
        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    Employee harry;
    // harry.a = 134; -->This will throw error as a is private
    harry.d = 34;
    harry.e = 89;
    harry.setData(1,2,4);
    harry.getData();
    return 0;
}
