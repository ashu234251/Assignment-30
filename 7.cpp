/*
7. Write a C++ program to accept a username if the username has less than 6 characters
and must contain any digit or special symbol.
*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[20];
    cout<<"Enter User Name: ";
    cin>>str;

    int i,flag1=0,flag2=0;
    for(i=0;str[i];i++)
    {
        if((str[i]>47 && str[i]<58))
           flag1=1;
        if(!((str[i]>47 && str[i]<58) || (str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')))
           flag2=1;
    }
    try
    {
        if(strlen(str)>=6)
          throw"Error- Username should have less than 6 digits";
        if(flag1!=1)
          throw"Username must contain a digit.";
        if(flag2!=1)
          throw"Username must contain a special character.";
        else
          cout<<"Username is: "<<str<<endl;
    }
    catch(const char*msg)
    {
        cout<<msg<<endl;
    }

    return 0;
}