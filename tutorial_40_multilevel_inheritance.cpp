/*
# Multilevel Inheritance:
1. A derived class is inherited from another derived class.
2. Enables a chain of inheritance (e.g., Student → Exam → Result).

# Code Example:
1. Student Class:
- Protected: roll_number.
- Functions: set_roll_number() (sets roll number), get_roll_number() (prints roll number).

2. Exam Class:
- Protected: maths, physics.
- Functions:
    set_marks() → Sets marks.
    get_marks() → Prints marks.


3. Result Class:
- Private: percentage.
- Function:
    [*] display_results():
        - Calls get_roll_number() and get_marks().
        - Calculates percentage as (maths + physics) / 2.


# Main Function:
1. Create Result object.
2. Call:
- set_roll_number() → Assign roll number.
- set_marks() → Assign marks.
- display_results() → Display roll number, marks, and percentage.
*/

#include <iostream>
using namespace std;

// Student Class
class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student ::set_roll_number(int r)
{
    roll_number = r;
}

void Student ::get_roll_number()
{
    cout << "The roll number is " << roll_number << endl;
}


// Exam Class
class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam ::get_marks()
{
    cout << "The marks obtained in maths are: " << maths << endl;
    cout << "The marks obtained in physics are: " << physics << endl;
}


// Result Class
class Result : public Exam
{
    float percentage;

public:
    void display_results()
    {
        get_roll_number();
        get_marks();
        cout << "Your result is " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{
    Result harry;
    harry.set_roll_number(420);
    harry.set_marks(94.0, 90.0);
    harry.display_results();
    return 0;
}
