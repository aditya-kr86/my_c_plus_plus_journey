/*
### **Short Notes**

#### **Constants**
- Use `const` to declare variables that cannot be modified.
- Example: `const int x = 10;`

#### **Manipulators**
- `endl`: New line.  
- `setw`: Sets the output width.  

#### **Operator Precedence**
- Operators like `*`, `/`, `%` have higher precedence than `+`, `-`.  
- Associativity defines evaluation order when precedence is the same (usually left-to-right).  
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Constants
    const int a = 3;
    cout << "Value of a: " << a << endl;
    // a = 45; // Uncommenting this will cause an error

    // Manipulators
    int x = 3, y = 78, z = 1233;
    cout << "Without setw:" << endl;
    cout << x << " " << y << " " << z << endl;

    cout << "With setw (width = 4):" << endl;
    cout << setw(4) << x << " " << setw(4) << y << " " << setw(4) << z << endl;

    // Operator Precedence
    int p = 3, q = 4;
    int result = ((((p * 5) + q) - 45) + 87);
    cout << "Result of expression: " << result << endl;

    return 0;
}
