/*
Short Notes

Control Structures
1. Sequence: Executes one instruction after another.  
2. Selection: Executes based on a condition (e.g., If-Else, Switch-Case).  
3. Loop: Repeats instructions while a condition is true.

If-Else
- Syntax:
  ```cpp
  if (condition) { ... } 
  else if (condition) { ... } 
  else { ... }
  ```
- Allows multiple conditions with `else if`.
- Example: `if (age < 18) { ... }`

Switch-Case
- Tests a variable against specific cases.
- Syntax:
  ```cpp
  switch (variable) {
      case value1: ... break;
      case value2: ... break;
      default: ... break;
  }
  ```
- Use `break` to exit cases.
- Example: `switch (age) { case 18: ... }`
*/
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Tell me your age: ";
    cin >> age;

    // 1. If-Else Statement
    if (age < 18) {
        cout << "You cannot come to the party.\n";
    } else if (age == 18) {
        cout << "You are a kid and will get a kid pass.\n";
    } else {
        cout << "You can come to the party.\n";
    }

    // 2. Switch-Case Statement
    switch (age) {
        case 18:
            cout << "You are 18\n";
            break;
        case 22:
            cout << "You are 22\n";
            break;
        case 2:
            cout << "You are 2\n";
            break;
        default:
            cout << "No special cases\n";
            break;
    }

    cout << "Done with switch case.";
    return 0;
}
