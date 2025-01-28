/*
1. Array of Objects:
- Declared like normal arrays but stores objects: ClassName arrayName[size];.

Example:
- Employee fb[4];  // Array of Employee objects
- Use loops for efficient operations on all objects.

2. Functions in Array of Objects:
- setId(): Assigns id and a fixed salary to the object.
- getId(): Displays the id of the object.

3. Passing Objects as Arguments:
- Objects can be passed to functions to perform operations on their data.
- Example: Adding data members of two objects and storing the result in another.
    void setDataBySum(Complex o1, Complex o2) {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

- Functions:
    - setData: Assigns values to private data members.
    - setDataBySum: Adds data from two objects.
    - printNumber: Displays object data.

4. Syntax Highlights:
- Array of objects:
    ClassName arrayName[size];
- Passing objects:
    void functionName(ClassName obj);
*/
class complex{
    int a;
    int b;

    public: 
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }

        void setDataBySum(complex o1, complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }

        void printNumber(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
