/*
# Key File I/O Classes
Class Name       |   Purpose
-----------------|-------------------------------
ofstream         |   Writing to files
ifstream         |   Reading from files
fstream          |   Both reading & writing

# Opening & Closing Files
- Write Mode: ofstream hout("file.txt");
- Read Mode: ifstream hin("file.txt");
- Closing File: <object_name>.close();

# Key Functions
Function           |    Purpose
-------------------|-----------------------------
<<                 |    Writes to a file
>>                 |    Reads only one word from a file
getline()          |    Reads a full line from a file
.close()           |    Disconnects file from program

*/
#include<iostream>
#include<fstream>
 
using namespace std;
 
int main(){
 
              // connecting our file with hout stream
               ofstream hout("sample60.txt");
   
               // creating a name string variable and filling it with string entered by the user
              string name;
               cout<<"Enter your name: ";
              cin>>name;
     
             // writing a string to the file
             hout<<name + " is my name";
 
            // disconnecting our file
            hout.close();
            // connecting our file with hin stream
           ifstream hin("sample60.txt");
 
          // creating a content string variable and filling it with string present there in the text file
           string content;
            hin>>content;
           cout<<"The content of the file is: "<<content;
 
           // disconnecting our file
           hin.close();
           return 0;
}
