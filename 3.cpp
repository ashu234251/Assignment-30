/*
3. Write a C++ program to perform arithmetic operations on two numbers and throw an
exception if the dividend is zero or does not contain an operator.
*/
#include<iostream>
using namespace std;
int main()
{
    char o;
    int a;
    float b;
    cout<<"Enter Operator: ";
    cin>>o;

    switch(o)
    {
        case '+' :
            cout<<"Enter two Numbers: "<<endl;
            cin>>a>>b;
            cout<<"Sum is: "<<a+b<<endl;
            break;
        case '-' :
            cout<<"Enter two Numbers: "<<endl;
            cin>>a>>b;
            cout<<"Difference between first and second number is: "<<a-b<<endl;
            break;
        case '*' :
            cout<<"Enter two Numbers: "<<endl;
            cin>>a>>b;
            cout<<"Multiplication is: "<<a*b<<endl;
            break;
        case '/' :
            cout<<"Enter two Numbers: "<<endl;
            cin>>a>>b;
            try
            {
                if(b==0)
                  throw"Divide by zero error.";
                else
                  cout<<a<<"/"<<b<<"  is: "<<a/b<<endl;
            }
            catch(const char *str)
            {
                cout<<str<<endl;
            }
            break;
        default:
            cout<<"Wrong Operator Entered."<<endl;
    }

    return 0;
}