/*
Short Notes

1. Built-in Data Types
- Predefined by C++.  
- Global Variables: Declared outside functions, accessed using `::`.

2. Float, Double, Long Double Literals
- Default type for decimals: `double`.  
- Suffixes:  
  - `F/f` → Float  
  - `L/l` → Long Double  
- Example: `float d = 34.4F;`.

3. Reference Variables
- Definition: Alias for an existing variable.  
- Syntax:
  ```cpp
  float &ref = var;  
  ```

4. Typecasting
- Definition: Converting one data type to another.  
- Methods:  
  - `(type)variable`  
  - `type(variable)`  
*/
#include <iostream>
using namespace std;

int c = 45; // Global variable

int main() {
    // Built-in Data Types
    int a = 5, b = 6, c;
    c = a + b; // Local variable
    cout << "Local c: " << c << endl;
    cout << "Global c: " << ::c << endl;

    // Float, Double, Long Double Literals
    float d = 34.4F;
    long double e = 34.4L;
    cout << "Size of 34.4: " << sizeof(34.4) << endl;
    cout << "Size of 34.4F: " << sizeof(34.4F) << endl;
    cout << "Size of 34.4L: " << sizeof(34.4L) << endl;

    // Reference Variables
    float x = 455;
    float &y = x;
    cout << "x: " << x << ", y: " << y << endl;

    // Typecasting
    int a = 45;
    float b = 45.46;
    cout << "Typecasted a: " << (float)a << endl;
    cout << "Typecasted b: " << int(b) << endl;
    cout << "Expression: " << a + (int)b << endl;

    return 0;

}
