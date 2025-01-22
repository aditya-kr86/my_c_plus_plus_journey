#include<iostream>
#include<vector>
using namespace std;


template <class T>
void display(vector <T> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout <<endl;
    
}

int main()
{
    vector<int> vec1; // Zero length Vector
    vector<char> vec2(4); // 4-element character Vector
    // vec2.push_back('G');
    // display(vec2);
    vector<char> vec3(vec2); // 4-element character Vector from vec2
    display(vec3);
    // vector<char> vec3(vec2); // 4-element character Vector from vec2
    vector<int> vec4(6,3); // 6-element vector of 3s
    display(vec4);


    // int element, size;
    // cout<<"Enter the size of yur vector" <<endl;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter an element to add to this vector"<<endl;
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    
    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+2,5, 56);
    // display(vec1);
    // return 0; 
}