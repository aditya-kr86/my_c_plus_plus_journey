/*
# Input/Output in C++:
1. `cin` → Input stream (takes input from user).  
2. `cout` → Output stream (prints messages/values).  
3. `>>` → Extraction operator (used with `cin`).  
4. `<<` → Insertion operator (used with `cout`).  

# Example:
```cpp
int num1, num2;
cin >> num1; // Take input
cin >> num2;
cout << "Sum is " << num1 + num2; // Output result

# Reserved Keywords:
- Cannot be redefined or used as variable names.
- Examples:
  - Control: `if`, `else`, `while`, `for`, `switch`.
  - Data: `int`, `float`, `char`, `bool`.
  - Others: `return`, `void`, `namespace`.
*/
# include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout<<"Enter the value of num1:\n"; /* '<<' is called Insertion operator */
    cin>>num1; /* '>>' is called Extraction operator */

    cout<<"Enter the value of num2:\n"; /* '<<' is called Insertion operator */
    cin>>num2; /* '>>' is called Extraction operator */

    cout<<"The sum is "<< num1+num2;

    return 0;
}
