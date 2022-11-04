/*
9. Write a C++ program to accept Gmail id only and throw an exception if the id does not
contain @ and gmail.com.
*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[50];
    cout<<"Enter your Email Address: ";
    cin>>str;
    try
    {
        if(strchr(str,'@')==0)
           throw"Error- Email Doesn't contain @.";
        else
           cout<<"No Error"<<endl;
    }
    catch(const char *msg)
    {
        cout<<msg<<endl;
    }

    cout<<"Entered Email Address is: "<<str<<endl;
    return 0;

}