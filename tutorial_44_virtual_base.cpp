/*
1. Virtual Base Class:
- Prevents ambiguity in multiple inheritance.
- Ensures only one copy of the base class is inherited.

2. Use Case:
- When a class is indirectly inherited multiple times through different derived classes.

3. Syntax:
    class B : public virtual A { };
    class C : public virtual A { };
    class D : public B, public C { };

4. Key Benefits:
- Resolves ambiguity.
- Shares a single instance of the base class.

5. Example:
    obj.say(); // Accesses A's method without ambiguity
*/

#include <iostream> 
using namespace std; 
class A { 
public: 
    void say() 
    { 
        cout << "Hello world"<<endl; 
    } 
}; 
class B : public virtual A { 
};   
class C : public virtual A { 
};   
class D : public B, public C { 
}; 
