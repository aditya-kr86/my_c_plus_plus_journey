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