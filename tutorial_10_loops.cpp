/*
#### **1. For Loop**  
- Executes for a specific number of times.  
- Syntax:  
  ```cpp
  for (initialization; condition; updation) {
      // loop body
  }
  ```
- Example:  
  ```cpp
  for (int i = 1; i <= 4; i++) {
      cout << i;
  }
  ```

#### **2. While Loop**  
- Executes as long as the condition is true.  
- Syntax:  
  ```cpp
  while (condition) {
      // loop body
  }
  ```
- Example:  
  ```cpp
  int i = 1;
  while (i <= 4) {
      cout << i;
      i++;
  }
  ```

#### **3. Do-While Loop**  
- Executes at least once before checking the condition.  
- Syntax:  
  ```cpp
  do {
      // loop body
  } while (condition);
  ```
- Example:  
  ```cpp
  int i = 1;
  do {
      cout << i;
      i++;
  } while (i <= 4);
*/
#include <iostream>

using namespace std;
int main()
{
    /*Loops in C++:
    There are three types of loops in C++:
        1. For loop
        2. While Loop
        3. do-While Loop
    */

    /*For loop in C++*/
    int i=1;
    cout<<i;
    i++;

    // Syntax for for loop
    // for(initialization; condition; updation)
    // {
    //     loop body(C++ code);
    // }

    for (int i = 1; i <= 40; i++)
    {
        /* code */
        cout<<i<<endl;
    }

    // Example of infinite for loop
    for (int i = 1; 34 <= 40; i++)
    {
        /* code */
        cout<<i<<endl;
    }

    /*While loop in C++*/
    // Syntax:
    // while(condition)
    // {
    //     C++ statements;
    // }

    //  Printing 1 to 40 using while loop
    int i=1;
    while(i<=40){
        cout<<i<<endl;
        i++;
    }

    // Example of infinite while loop
    int i = 1;
    while (true)
    {
        cout << i << endl;
        i++;
    }

    /* do While loop in C++*/
        // Syntax:
        // do
        // {
        //     C++ statements;
        // }while(condition);
        
    //  Printing 1 to 40 using while loop
    int i=1;
    do{
        cout<<i<<endl;
        i++;
    }while(false);

    return 0;
}
