/*
1. Static Data Members:
- Shared across all objects.
- Only one copy exists.
- Initialize outside the class: int ClassName::memberName = value;.

2. Static Methods:
- Independent of objects.
- Access only static members.
- Called using: ClassName::MethodName();.

3. Example:
- Variables:
    - id: Non-static, unique for each object.
    - count: Static, shared by all objects.
- Functions:
    - setData: Inputs id, increments count.
    - getData: Displays id and count.
    - getCount: Displays count.

4. Syntax Highlights:
- Static members: static data_type memberName;.
- Static methods: static returnType methodName();.
*/
#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void){
        // cout<<id; // throws an error
        cout<<"The value of count is "<<count<<endl;
    }
};

// Count is the static data member of class Employee
int Employee::count; // Default value is 0

int main()
{
    Employee harry, rohan, lovish;
    // harry.id = 1;
    // harry.count=1; // cannot do this as id and count are private

    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();

    return 0;
}
