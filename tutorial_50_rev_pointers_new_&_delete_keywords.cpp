/*
1. Pointers: Variables storing addresses; use * to declare and dereference.
2. new :
- Allocates memory dynamically.
- Single variable: int *p = new int(5);
- Array: int *arr = new int[3];
3. delete :
- Frees allocated memory.
- Single variable: delete ptr;
- Array: delete[] arr;
4. Access after Deletion: Results in garbage values.
*/

#include<iostream>
using namespace std;

int main()
{
    // Basic Pointer Usage
    int a = 4;
    int* ptr = &a;
    cout << "The value of a is " << *(ptr) << endl;
    // new Keyword
    float *p = new float(40.78);
    cout << "The value at address p is " << *(p) << endl;
    // Using new with Arrays
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    // delete Keyword
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    delete[] arr; // Frees allocated memory
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    return 0;
}
