#include <iostream>
#include <string.h>
using namespace std;

class car
{
    char brand[50];
    char model[50];
    int manu_date;
    public: 
    void getdetails(char brand[],char model[],int manu_date);
    void printdetails();
};

void car::getdetails(char b[],char m[],int d)
{
    strcpy(brand,b);
    strcpy(model,m);
    manu_date=d;
}
void car::printdetails()
{
    cout<<"BRAND NAME : "<<brand<<endl;
    cout<<"MODEL NAME : "<<model<<endl;
    cout<<"MANUFACTURING DATE : "<<manu_date<<endl;
}

int main()
{
    car c1,c2;
    char b[50],m[50];
    int d;

    cout<<"ENTER DETAILS FOR CAR 1 "<<endl;
    cout<<"ENTER BRAND NAME : ";
    cin>>b;
    cout<<"ENTER MODEL NAME : ";
    cin>>m;
    cout<<"ENTER MANUFACTURING DATE : ";
    cin>>d;

    c1.getdetails(b,m,d);
    cout<<"ENTER DETAILS FOR CAR 1 "<<endl;
    cout<<"ENTER BRAND NAME : ";
    cin>>b;
    cout<<"ENTER MODEL NAME : ";
    cin>>m;
    cout<<"ENTER MANUFACTURING DATE : ";
    cin>>d;

    c2.getdetails(b,m,d);

    system("cls");
    cout<<"DETAILS OF CAR 1 "<<endl;
    c1.printdetails();
    cout<<"DETAILS OF CAR 2 "<<endl;
    c2.printdetails();
    return 0;
}