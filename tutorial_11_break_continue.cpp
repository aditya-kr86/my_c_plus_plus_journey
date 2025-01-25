/*
-->Break Statement
* Terminates the loop entirely.
* Used to exit the loop when a specific condition is met.
Example:
for (int i = 0; i < 10; i++) {
    if (i == 5) {
        break; // Exit loop
    }
    cout << i;
}

-->Continue Statement
Skips the current iteration of the loop.
Used to skip certain iterations based on a condition.
Example:
for (int i = 0; i < 10; i++) {
    if (i == 5) {
        continue; // Skip current iteration
    }
    cout << i;
}
*/
#include<iostream>
using namespace std;

int main(){
    // for (int i = 0; i < 40; i++)
    // {
    //     /* code */
    //     if(i==2){
    //         break;
    //     }
    //     cout<<i<<endl;
    // }
    for (int i = 0; i < 40; i++)
    {
        /* code */
        if(i==2){
            continue;
        }
        cout<<i<<endl;
    }

    
    return 0;
}
