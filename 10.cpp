/*
10. Write a C++ program to accept Nickname and throw an exception if it has greater than 8
characters or does contain a digit or special symbol or space.
*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[20];
    cout<<"Enter your Nickname: ";
    cin>>str;

    int i,flag1=0,flag2=0,flag3;
    for(i=0;str[i];i++)
    {
        if((str[i]>'0' && str[i]<'9'))                                         // For Digits.
           flag1=1;
        if(!((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')))    // For Special Characters.
           flag2=1;
        if(str[i]==32)                                                         // For Space.
           flag3=1;
    }
    try
    {
        if(strlen(str)>8)
          throw"Error- Nickname shouldn't be of greater than 8 characters.";
        if(flag1==1)
          throw"Nickname shoudn't contain a digit.";
        if(flag2==1)
          throw"Nickname shoudn't contain any special character.";
        if(flag3==1)
          throw"Nickname shoudn't contain any space.";
        else
          cout<<"Nickname is: "<<str<<endl;
    }
    catch(const char*msg)
    {
        cout<<msg<<endl;
    }

    return 0;
}