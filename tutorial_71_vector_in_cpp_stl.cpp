/*
# What is a Vector in C++?
- A dynamic array that can grow and shrink automatically.
- Requires #include <vector>.

# Vector Declaration
- vector<int> vec1;       // Empty vector  
- vector<int> vec2(5, 0); // Vector of size 5, initialized with 0  

# Common Vector Methods
Method                   |          Function
-------------------------|-------------------------------------
                         |
push_back(x)             |          Adds x to the end
                         |                                                  
pop_back()               |          Removes the last element
                         |
insert(iter, x)          |          Inserts x at position iter
                         |                                          
size()                   |          Returns the number of elements
                         |                                          
at(i)                    |          Accesses element at index i safely
*/
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
