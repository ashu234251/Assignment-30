/*
8. Write a C++ program to accept a password and throw an exception if the password has
less than 6 characters or does not contain a digit or does not contain any special
character or does not contain any capital letter.
*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[20];
    cout<<"Enter Password: ";
    cin>>str;

    int i,flag1=0,flag2=0,flag3;
    for(i=0;str[i];i++)
    {
        if((str[i]>'0' && str[i]<'9'))
           flag1=1;
        if(!((str[i]>47 && str[i]<58) || (str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')))
           flag2=1;
        if(str[i]>='A' && str[i]<='Z')
           flag3=1;
    }
    try
    {
        if(strlen(str)<6)
          throw"Error- Password must have at less 6 characters";
        if(flag1!=1)
          throw"Password must contain a digit.";
        if(flag2!=1)
          throw"Password must contain a special character.";
        if(flag3!=1)
          throw"Password must contain a Capital Letter.";
        else
          cout<<"Password is: "<<str<<endl;
    }
    catch(const char*msg)
    {
        cout<<msg<<endl;
    }

    return 0;
}