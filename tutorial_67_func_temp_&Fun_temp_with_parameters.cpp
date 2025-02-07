/*
# What are Function Templates?
- A function template allows creating generic functions that work with any data type.
- Similar to class templates, function templates avoid code duplication.

# Syntax
    template <class T>
    ReturnType FunctionName(T param1, T param2) {
        // Function body
    }

# Example: Function Template for Averages
    template<class T1, class T2>
    float funcAverage(T1 a, T2 b) {
        return (a + b) / 2.0;
    }

# Example: Swap Function Template
    template <class T>
    void swapp(T &a, T &b) {
        T temp = a;
        a = b;
        b = temp;
    }

# Advantages of Function Templates
- Reduces redundant code (follows DRY principle).
- Works for multiple data types (int, float, char, etc.).
- Saves time and improves efficiency.
*/
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
