/*
Header Files
- `#include` imports header files.  
  - **System Header Files: Predefined (e.g., `<iostream>`).  
  - **User-Defined Header Files: Created by the programmer (e.g., `"filename.h"`).  

Operators
1. Arithmetic Operators: `+`, `-`, `*`, `/`, `%`.  
   - Increment/Decrement: `++`, `--`.  
2. Assignment Operators: Assign values (`=`, `+=`, etc.).  
3. Comparison Operators: Compare values (`==`, `!=`, `>=`, `<=`, `>`, `<`).  
4. Logical Operators: Work with boolean logic (`&&`, `||`, `!`).  
*/
#include<iostream>
using namespace std;

int main() {
    int a = 4, b = 5;

    // Arithmetic Operators
    cout << "Arithmetic Operators:\n";
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;
    cout << "a++ = " << a++ << endl;
    cout << "++a = " << ++a << endl;
    cout << "a-- = " << a-- << endl;
    cout << "--a = " << --a << endl;

    // Comparison Operators
    cout << "\nComparison Operators:\n";
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;

    // Logical Operators
    cout << "\nLogical Operators:\n";
    cout << "((a == b) && (a < b)): " << ((a == b) && (a < b)) << endl;
    cout << "((a == b) || (a < b)): " << ((a == b) || (a < b)) << endl;
    cout << "!(a == b): " << !(a == b) << endl;

    return 0;
}
