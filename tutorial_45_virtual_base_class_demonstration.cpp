/*
1.Virtual Base Class:
- Prevents ambiguity in multiple inheritance.
- Ensures only one copy of the base class is inherited.

2. Syntax:
    class Derived : virtual public Base { };

3. Key Features:
- Shared single instance of the base class across inheritance paths.
- Avoids multiple copies of the base class in derived classes.

4. Example Flow:
- Class Student (virtual base class).
- Classes Test and Sports inherit Student virtually.
- Class Result inherits Test and Sports.

5. Main Code Flow:
    Result obj;
    obj.set_number(4200);
    obj.set_marks(78.9, 99.5);
    obj.set_score(9);
    obj.display();

6. Output:
    Your roll no is 4200
    Your result is here:
    Maths: 78.9
    Physics: 99.5
    Your PT score is 9
    Your total score is: 187.4
*/

#include <iostream>
using namespace std;

class Student {
protected:
    int roll_no;
public:
    void set_number(int a) {
        roll_no = a;
    }
    void print_number(void) {
        cout << "Your roll no is " << roll_no << endl;
    }
};

class Test : virtual public Student { // Use virtual inheritance here
protected:
    float maths, physics;
public:
    void set_marks(float m1, float m2) {
        maths = m1;
        physics = m2;
    }
    void print_marks(void) {
        cout << "Your result is here: " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class Sports : virtual public Student { // Use virtual inheritance here
protected:
    float score;
public:
    void set_score(float sc) {
        score = sc;
    }
    void print_score(void) {
        cout << "Your PT score is " << score << endl;
    }
};

class Result : public Test, public Sports {
private:
    float total;
public:
    void display(void) {
        total = maths + physics + score;
        print_number();  // Now unambiguous due to virtual inheritance
        print_marks();
        print_score();
        cout << "Your total score is: " << total << endl;
    }
};

int main() {
    Result harry;
    harry.set_number(4200);        // Unambiguous
    harry.set_marks(78.9, 99.5);
    harry.set_score(9);
    harry.display();
    return 0;
}
