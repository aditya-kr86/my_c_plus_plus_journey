/*
1. Array of Objects:
- Stores objects as elements.
- Use pointers to dynamically allocate arrays.
2. Code Snippet:
3. Input Loop:
- Use ptr->setData() and increment ptr .
4. Output Loop:
- Use a temporary pointer ptrTemp for getData() .
5. Key Concept:
- Increment pointers to ensure different objects are accessed.
*/
#include <iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "Code of this item is " << id << endl;
        cout << "Price of this item is " << price << endl;
    }
};
int main()
{
    int size = 3;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;
    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout << "Enter Id and price of item " << i + 1 << endl;
        cin >> p >> q;
        // (*ptr).setData(p, q);
        ptr->setData(p, q);
        ptr++;
    }

    for (i = 0; i < size; i++)
    {
        cout << "Item number: " << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}
