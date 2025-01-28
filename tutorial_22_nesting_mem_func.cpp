/*
1. Nesting of Member Functions:
- One member function is called inside another within the same class.

2. Class Example:
    class binary {
    private:
        string s;
        void chk_bin();  // Validates binary input
    public:
        void read();     // Reads binary input
        void ones_compliment();  // Calculates one's complement
        void display();  // Displays binary number
    };

3. Function Highlights:
- read: Takes binary input.
- chk_bin: Ensures input contains only 0 and 1.
- ones_compliment: Flips 0 to 1 and vice versa (calls chk_bin).
- display: Prints the binary number.

4. Code Flow:
- Read → Validate (chk_bin) → Transform (ones_compliment) → Display.

5. Important Syntax:
- Private functions can only be accessed within the class.
- Nesting is useful for modular and reusable code.
*/

#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;
    void chk_bin(void);

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void binary::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary::ones_compliment(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
       else
        {
            s.at(i) = '0';
        }
    }
}

void binary::display(void)
{
    cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}
