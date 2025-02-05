/*
# Key File I/O Classes in C++
1. ifstream → Used for reading files.
2. ofstream → Used for writing to files.
3. fstream → Can handle both reading and writing.

# Methods to Open Files
- Using Constructor: ofstream out("file.txt");
- Using open() Method:
    ofstream out;
    out.open("file.txt");

# File Operations
Operation           |   Function
--------------------|-------------------------------------
Write to a file     |   ofstream and << operator
                    |               
Read from a file    |   ifstream and getline()
                    |                           
Close a file        |   .close() function
*/
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string st = "Aditya Kumar Gupta";
    string str2;
    // Opening files using constructor and writing in it
    // ofstream out("sampleFileTut60.txt"); // write OPeration
    // out<<st;

    // Opening files using constructor and Reading from it
    ifstream in("sampleFileTut60.txt"); // Read Operation
    // in>>str2;
    // cout<<str2;
    getline(in, str2);
    cout<<str2;
    return 0;
}
