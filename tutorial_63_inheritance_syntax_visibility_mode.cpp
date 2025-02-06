/*
# What are Templates?
- A template allows defining a generic class or function that works with multiple data types.

# Why Use Templates?
- Follows DRY principle, avoids repetition.
- Supports generic programming, improving efficiency.


# Template Syntax
    template <class T>
    class ClassName {
        T var;  // T can be any data type
    };

# Example Usage
- Vector<int> v1;   // Integer vector  
- Vector<float> v2; // Float vector  

# Advantages of Templates
- Saves time
- Reduces redundancy
- Improves code efficiency
- Essential for competitive programming
*/

#include <iostream>
using namespace std;
 
template <class T>
class vector {
    T *arr;
    int size;
    public:
        // vector(T* arr)[
            //code
        // ]
        //and many other methods
    
};
 
int main() {
    vector<int> myVec1();
    vector<float> myVec2();
    return 0;
}
