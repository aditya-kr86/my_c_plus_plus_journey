/*
## Opening a File : Two Methods
1. Using Constructor: ofstream out("file.txt");

2. Using open() Function:
    ofstream out;
    out.open("file.txt");
# Closing a File
- Always close files after use:
    out.close();  // For writing
    in.close();   // For reading

# Reading a File Until End
- Using eof() in a loop:
    while (!in.eof()) {
        getline(in, st);
        cout << st << endl;
    }
Ensures complete file reading.


*/

#include <iostream>
#include <fstream>
#include <string>
 
using namespace std;
 
int main()
{
    // declaring an object of the type ifstream
    ifstream in;
    //declaring string variable st
    string st;
    //opening the text file into in
    in.open("sample60.txt");
 
    // giving output the string lines by storing in st until the file reaches the end of it
    while (in.eof()==0) 
    {
        // using getline to fill the whole line in st
        getline(in,st);
        cout<<st<<endl;
    }
    return 0;
}
