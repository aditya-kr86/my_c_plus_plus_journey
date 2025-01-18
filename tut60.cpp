#include<iostream>
#include<fstream>

/*The Useful Classes for m=working with files in C++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream  --> derived from fstreambase
*/

/*
 In Order to work with files in c++, you will have to open it. Primarily , there are 2 ways to open a file :
 1. Using the Constructor
 2. Using the member function() of the class
 */
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