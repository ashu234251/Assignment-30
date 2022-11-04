/*
5. Write a C++ program to accept a mobile number and throw an exception if it does not
contain 10 digits.
*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[20];
    cout<<"Enter Mobile Number: ";
    cin>>str;
    int i;
    for(i=0;str[i];i++)
    {
     try
     {
        if(!(str[i]>47 && str[i]<58))
           throw"Wrong character in Mobile Number.";
     }
     catch(const char *msg)
     {
        cout<<msg<<endl;
        return 0;
     }
    }
    try
    {
        if(strlen(str)!=10)
          throw"Error- Mobile Number must be of 10 digits.";
        else
          cout<<"Mobile Number is: "<<str<<endl;
    }
    catch(const char *msg)
    {
        cout<<msg<<endl;
    }

    return 0;
}