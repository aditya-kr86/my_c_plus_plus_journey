/*
1. Memory Allocation:
- Variables: Allocated when objects are created; unique for each object.
- Functions: Allocated once during class declaration; shared by all objects.

2. Arrays in Classes:
- Store multiple values of the same type in sequential order.
- Manage data efficiently without multiple variable declarations.

3. Shop Class Example:
- Variables:
    - itemId[100]: Array for item IDs.
    - itemPrice[100]: Array for item prices.
    - counter: Tracks the number of items.

- Functions:
    - initCounter: Initializes the counter to 0.
    - setPrice: Inputs item ID and price.
    - displayPrice: Displays all items and prices.

4. Key Syntax:
- Arrays are used for storing multiple data points.
- Loops are used for iterating through array elements.
*/

#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}
