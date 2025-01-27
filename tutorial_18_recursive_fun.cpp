/*
# Key Points
1. Recursive Functions:
- Useful for problems that can be broken down into smaller subproblems (e.g.,factorial, Fibonacci).
Base Case is essential to terminate the recursion.

2. Factorial Function:
- factorial(4) = 4 * 3 * 2 * 1 = 24

3. Fibonacci Function:
- Finds the Fibonacci number at a specific position, e.g., fib(5) = 8, fib(6) = 13.

4. Performance:
- Recursion is not always the most efficient method for all problems. It can lead to performance issues in cases where repetitive calculations are involved (e.g., Fibonacci sequence).
*/
#include<iostream>
using namespace std;

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

// fib(5)
// fib(4) + fib(3)
// fib(2) + fib(3) + fib(2) + fib(3)

int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n * factorial(n-1);
}

// Step by step calculation of factorial(4)
// factorial(4) = 4 * factorial(3); 
// factorial(4) = 4 * 3 * factorial(2);
// factorial(4) = 4 * 3 * 2 * factorial(1);
// factorial(4) = 4 * 3 * 2 * 1;
// factorial(4) = 24;

int main(){
    // Factorial of a number:
    // 6! = 6*5*4*3*2*1 = 720
    // 0! = 1 by definition
    // 1! = 1 by definition
    // n! = n * (n-1)!
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    // cout<<"The factorial of "<<a<< " is "<<factorial(a)<<endl;
    cout<<"The term in fibonacci sequence at position "<<a<< " is "<<fib(a)<<endl;
    return 0;
}
