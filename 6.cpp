/*
6. Write a C++ program to accept area pin code and throw an exception if it does not
contain 6 digits.
*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[20];
    cout<<"Enter Pin Code: ";
    cin>>str;
    int i;
    for(i=0;str[i];i++)
    {
     try
     {
        if(!(str[i]>47 && str[i]<58))
           throw"Wrong character in Pincode Entered.";
     }
     catch(const char *msg)
     {
        cout<<msg<<endl;
        return 0;
     }
    }
    try
    {
        if(strlen(str)!=6)
          throw"Error- Pincode must be of 6 digits.";
        else
          cout<<"Pincode is: "<<str<<endl;
    }
    catch(const char *msg)
    {
        cout<<msg<<endl;
    }

    return 0;
}