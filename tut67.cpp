#include<iostream>
using namespace std;

// float funcAverage(int a, float b){
//     float avg = (a+b)/2;
//     return avg;
// }

// float funcAverage2(float a, float b){
//     float avg = (a+b)/2;
//     return avg;
// }
template<class T>
void swap1( T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}


template<class T1, class T2>
float funcAverage2(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

int main()
{
    float a;
    a =funcAverage2 <int , int> (5,2);
    cout<<"the average is : " <<a <<endl;

    int x = 5, y = 7;
    swap1(x,y);
    cout<< x << endl << y;


    return 0;
}