/*
1. Write a C++ program to demonstrate the use of try, catch block with the argument as an
integer and string using multiple catch blocks.
*/
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a Number: ";
    cin>>a;
    try
    {
        if(a==0)
          throw"Zero Error.";
        if(a==1)
          throw a;
        else
          cout<<"Result is: "<<a<<endl;
    }
    catch(const char *msg)
    {
        cout<<msg<<endl;
    }
    catch(int x)
    {
        cout<<"Error Value is: "<<a<<endl;
    }

    return 0;
}