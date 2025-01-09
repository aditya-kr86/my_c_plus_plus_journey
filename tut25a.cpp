#include <iostream>
using namespace std;
class Employee
{
private:
    int id;
    int salary;

public:
    void setId(void){
        salary = 122;
        cout<<"Enter the id of employee: "<<endl;
        cin>>id;
    }

    void getId(void){
        cout<<"The id of this employee is: "<<endl;
        cout<<id;
    }
};

int main(){
    // Employee harry, rohan, lovish, shruti;
    // harry.setId();
    // harry.getId();
    Employee fb[4];
    for (int i=0; i< 4; i++){
        fb[i].getId();
        fb[i].setId();
    }
    return 0;
}