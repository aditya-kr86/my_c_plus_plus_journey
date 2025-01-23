/*
# Variable Scope:
1. Local Variables: Declared inside a function, accessible only within that function.
2. Global Variables: Declared outside functions, accessible throughout the program.

# Data Types:
1. Built-in: Predefined in C++.
   - `int`: Stores integers (e.g., `-10`, `20`).
   - `float`: Stores decimal numbers (e.g., `3.14`).
   - `char`: Stores a single character (e.g., `'a'`).
   - `double`: Stores high-precision decimals.
   - `bool`: Stores `true` or `false`.
2. User-Defined: Custom-defined types (`struct`, `union`, `enum`).
3. Derived: More advanced types (`array`, `pointer`, `function`).

#Rules for Declaring Variables:
1. Names must start with a letter or `_` (underscore).  
2. Can contain letters and numbers after the first character.  
3. Case-sensitive (`a` ≠ `A`).  
4. No spaces or special characters allowed.  
5. Reserved keywords can't be used as variable names.
*/
#include <iostream>
using namespace std;

int main() {
    int a = 14, b = 15; // Integer variables
    float pi = 3.14;    // Floating-point variable
    char c = 'd';       // Character variable
    bool is_true = false; // Boolean variable

    cout << "Value of a: " << a << "\nValue of b: " << b << endl;
    cout << "Value of pi: " << pi << "\nValue of c: " << c << endl;
    cout << "Boolean value: " << is_true << endl;
    return 0;
}
