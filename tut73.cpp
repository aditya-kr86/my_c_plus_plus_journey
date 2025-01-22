#include<iostream>
#include<string>
#include<map>
using namespace std;


int main()
{
    map<string, int> marksMap;
    marksMap["Aditya"] = 89;
    marksMap["Ravi"] = 75;
    marksMap.insert({{"Good",1612}, {"sujeet",195}});


    map<string, int> :: iterator iter;
    for (iter = marksMap.begin(); iter!=marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    cout<<"The size is: "<<marksMap.size()<<endl;
    cout<<"The max size is: "<<marksMap.max_size()<<endl;
    cout<<"The empty return value is: "<<marksMap.empty()<<endl;

    return 0;
}