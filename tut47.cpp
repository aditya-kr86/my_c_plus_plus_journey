#include <iostream>
#include <math.h>
using namespace std;

class SimpleCalculator
{
    float a, b;

public:
    void getDataSimple()
    {
        cout << "Enter the value of a" << endl;
        cin >> a;
        cout << "Enter the value of b" << endl;
        cin >> b;
    }
    void performOperationsSimple()
    {
        cout << "The value of a + b is : " << a + b << endl;
        cout << "The value of a - b is : " << a - b << endl;
        cout << "The value of a * b is : " << a * b << endl;
        if (b != 1)
            cout << "The value of a / b is : " << a / b << endl;
    }
};
class ScientificCalculator
{
    float a, b;

public:
    void getDataScientific()
    {
        cout << "Enter the value of a" << endl;
        cin >> a;
        cout << "Enter the value of b" << endl;
        cin >> b;
    }
    void performOperationsScientific()
    {
        cout<<"Scientic Operations:"<<endl;
        cout << "Power: " << a << "," << b << " = " << pow(a, b) << endl;
        cout << "Square Root: " << a << "  -->" << sqrt(a) << b << "  -->" << sqrt(b) << endl;
        cout << "Logarithmic: " << a << "  -->" << log(a) << b << "  -->" << log(b) << endl;
        cout << "Sin Value: " << a << "  -->" << sin(a) << b << "  -->" << sin(b) << endl;
    }
};
class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
    // void dis
};

int main()
{
    // SimpleCalculator calc;
    // calc.getData();
    // calc.performOperations();
    HybridCalculator calc;
    calc.getDataScientific();
    calc.performOperationsScientific();
    

    return 0;
}
