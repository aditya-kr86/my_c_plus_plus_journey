/*
# Protected Access Modifier:
1. Allows access to derived classes but not outside the class hierarchy.
2. Private members are never inherited.

# Behavior of Members Based on Derivation Mode:

Mode            | Private Members    |    Protected Members     |      Public Members
---------------------------------------------------------------------------------------
                |                    |                          |                      
Public          | Not Inherited      |    Protected             |      Public
                |                    |                          |                      
Private         | Not Inherited      |    Private               |      Private
                |                    |                          |                      
Protected       | Not Inherited      |    Protected             |      Protected

# Code Example:
    class Base {
    protected:
        int a; // Accessible in derived classes
    private:
        int b; // Not inherited
    };
    class Derived : protected Base {};


# Key Points:
1. Public Derivation:
- Protected → Protected, Public → Public.

2. Private Derivation:
- Protected → Private, Public → Private.

3. Protected Derivation:
- Protected → Protected, Public → Protected.

Output Behavior:
- Attempting to access protected members from outside the class causes a compilation error.
*/

#include<iostream>
using namespace std;

class Base{
    protected:
        int a; 
    private:
        int b;

};

class Derived: protected Base{
   
};

int main(){
    Base b;
    Derived d;
    // cout<<d.a; // Will not work since a is protected in both base as well as derived class
    return 0;
}

