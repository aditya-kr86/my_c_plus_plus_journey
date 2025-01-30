/*
Constructors with Default Arguments
1. Definition:
- Constructors with predefined default values for parameters.
- If no value is passed for a parameter, its default value is used.

2. Key Points:
- Default values are specified during constructor declaration.
- If all arguments are provided during object creation, default values are ignored.
*/
#include<iostream>
using namespace std;

class Simple{
    int data1;
    int data2;
    int data3;

    public:
        Simple(int a, int b=9, int c=8){
            data1 = a;
            data2 = b;
            data3 = c;
        }

        void printData();

};

void Simple :: printData(){
    cout<<"The value of data1, data2 and data3 is "<<data1<<", "<< data2<<" and "<< data3<<endl;
}


int main(){
    Simple s(12, 13);
    s.printData();
    return 0;
}
