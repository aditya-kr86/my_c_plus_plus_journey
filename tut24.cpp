#include <iostream>
using namespace std;
class Employee
{
private:
    int id;
    static int count; // count =1000 yanha par WRONG

public:
    void setData(void)
    {
        cout << "Enter the id: " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this emplyee is: " <<id<<" and this is employee number :"<<count<< endl;
        // cout << id<< endl;
    }
    static void getCount(void){
        cout<< "The Value of count is "<<count<<endl;
    }

};

int Employee :: count; // Default value is zero. // count =1000 yanha par KAR SAKTE HAIN
int main()
{
    Employee harry,rohan,lovish;
    harry.setData();
    harry.getData();

    rohan.setData();
    rohan.getData();
    rohan.getCount();

    lovish.setData();
    Employee :: getCount();

    return 0;
}