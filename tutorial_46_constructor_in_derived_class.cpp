// 1. Derived Class Constructor Execution:
//      # Single Inheritance: Base class constructor executes before derived class constructor.
//      # Multiple Inheritance: Base classes are constructed in the order they appear in the declaration.
//      # Multilevel Inheritance: Constructors are executed in inheritance order.
// 2. Special Syntax for Arguments:
    // DerivedConstructor(arg1, arg2): Base1(arg1), Base2(arg2) {
    // Body
    // }
// 3. Virtual Base Class:
//      Virtual base class constructors execute before non-virtual base classes.
//      Ensures a single instance of the virtual base class is constructed.
// 4. Examples:
//      # Single Inheritance:
//      Base → Derived.
//      # Multiple Inheritance:
//      class C : public A, public B { };
//      A → B → C.
//      # Virtual Base Class:
//      Virtual base → Non-virtual → Derived.
