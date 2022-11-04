// 2. Write a C++ program to demonstrate try, throw and catch statements.

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter two Numbers: "<<endl;
    cin>>a>>b;
    try
    {
        if(b==0)
          throw"Divide by Zero Error.";
        else
        {
           c=a/b;
           cout<<"Result is: "<<c<<endl;
        }
    }
    catch(const char *msg)
    {
        cout<<msg<<endl;
    }

    return 0;
}