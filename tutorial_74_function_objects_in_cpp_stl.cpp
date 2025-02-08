/*
- Functors are objects that behave like functions.
- Used in STL algorithms to customize behavior.
- Default sorting is ascending, but we can pass a functor to change it.
- Example: greater<int>() sorts an array in descending order.
- Other functors include plus<T>(), minus<T>(), multiplies<T>(), etc.
- Explore more STL functors from: C++ Reference - Function Objects.
*/
#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;



int main()
{
    // Function Objects (Functor): Function wrapped in a class so that it available like an object
    int arr[] = {100,36,45,12,54,77};
    sort(arr, arr + 6);
    sort(arr, arr + 6, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;;
    }
    

    return 0;
}
