/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +,-,*,/ and displays the resullt using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    create another class HybridCalculator and inheri it using these 2 classes.
    Q1. What type of inheritance are You Using?
    Q2. Which mode of inheritance are you using?
    Q3. Create an Object of HybridCalculator and display results of simple and scientific calculator?
    Q4. How is Code Reusability implemented?
*/
#include <iostream>
#include <math.h>
using namespace std;

class SimpleCalculator
{
protected:
    float number1;
    float number2;
    public : 
    void setValues(float num1 = 0.0, float num2 = 0.0)
    {
        number1 = num1;
        number2 = num2;
    }

    void simpleResult()
    {
        cout<<"Simple Operations:"<<endl;
        cout << "Addition: " << number1 << "+" << number2 << " = "<< number1 + number2 << endl;
        cout << "Substraction: " << number1 << "-" << number2 << " = "<< number1 - number2 << endl;
        cout << "Multiplication: " << number1 << "*" << number2 << " = "<< number1 * number2 << endl;
        if (number2 != 0)
        {
            cout << "Division: " << number1 << "/" << number2 << " = "<< number1 / number2 << endl;
        }
        else
        {
            cout<<"Can't Perform Division(cannot Divide by zero)";
        }
        

        
    }
};

class scientificCalculator
{
protected:
    float number1;
    float number2;

public:
    void setValues(float num1 = 0.0, float num2 = 0.0)
    {
        number1 = num1;
        number2 = num2;
    }

    void scientificResult()
    {
        cout<<"Scientic Operations:"<<endl;
        cout << "Power: " << number1 << "," << number2 << " = " << pow(number1, number2) << endl;
        cout << "Square Root: " << number1 << "  -->" << sqrt(number1) << number2 << "  -->" << sqrt(number2) << endl;
        cout << "Logarithmic: " << number1 << "  -->" << log(number1) << number2 << "  -->" << log(number2) << endl;
        cout << "Sin Value: " << number1 << "  -->" << sin(number1) << number2 << "  -->" << sin(number2) << endl;
    }
};

class hybridCalcular : public SimpleCalculator, public scientificCalculator{
    public :
    void showResult(){
        simpleResult();
        scientificResult();
    }

};
int main()
{
    hybridCalcular claculator;
    claculator.SimpleCalculator :: setValues(12,3);
    claculator.scientificCalculator :: setValues(4,5);
    claculator.showResult();

    return 0;
}
