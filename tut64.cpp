#include <iostream>
using namespace std;

template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotproduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            // cout<<this->arr[i] <<" and " <<v.arr[i] <<endl;
            d += this->arr[i] * v.arr[i];
            // cout<<"Value of d: "<<d <<endl;
        }
        cout<<"Returning : "<<d <<endl;
        return d;
    }
};

int main()
{
    // vector v1(3);
    // v1.arr[0] = 4;
    // v1.arr[1] = 3;
    // v1.arr[2] = 1;
    // vector v2(3);
    // v2.arr[0] = 1;
    // v2.arr[1] = 9;
    // v2.arr[2] = 8;
    // int a = v1.dotproduct(v2);
    // cout << "The dotProdect is : " << a << endl;

    vector <float>v1(3);
    v1.arr[0] = 4.6;
    v1.arr[1] = 3.2;
    v1.arr[2] = 1.2;
    vector <float>v2(3);
    v2.arr[0] = 1.6;
    v2.arr[1] = 9.6;
    v2.arr[2] = 8.6;
    float a = v1.dotproduct(v2);
    cout << "The dotProdect is : " << a << endl;

    return 0;
}