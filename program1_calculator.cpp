#include <iostream>
#include <conio.h>

using namespace std;
int add(int a,int b)
{
    return a+b;
}
float add(float a,float b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
float sub(float a,float b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
float mul(float a,float b)
{
    return a*b;
}
float div(float a,float b)
{
    return a/b;
}
int main()
{
    float a,b,ans;
    char choice;

    cout<<"BASIC CALCULATOR USING C++"<<endl<<endl;
    cout<<"PRESS + FOR ADDITION "<<endl;
    cout<<"PRESS - FOR SUBTRACTION "<<endl;
    cout<<"PRESS * FOR MULTIPLICATION"<<endl;
    cout<<"PRESS / FOR DIVISION "<<endl;
    cout<<"ENTER YOUR CHOICE : ";
    cin>>choice;

    cout<<"ENTER NO 1 : ";
    cin>>a;
    cout<<"ENTER NO 2 : ";
    cin>>b;

    switch(choice)
    {
        case '+' :
        {
            ans=add(a,b);
            ans=add(a,b);
            break;
        }
        case '-' :
        {
            ans=sub(a,b);
            ans=sub(a,b);
            break;
        }
        case '*' :
        {
            ans=mul(a,b);
            ans=mul(a,b);
            break;
        }
        case '/' :
        {
            ans=div(a,b);
            break;
        }
        default : 
        {
            cout<<"INVALID INPUT";
            break;
        }
    }
    cout<<"ANS : "<<ans;
    getch();
}