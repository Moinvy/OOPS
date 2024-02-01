// #include <iostream>
// #include <string>
// using namespace std;

// class student;
// class university
// {
//     private: 
//     int roll_no;
//     protected : 
//     string name;
//     string course;
//     public : 
//     friend class student;
// };
// class student{
//     public:
//     void getdata(university& uni);
//     void displaydata(university& uni);
// };
// void student::getdata(university& uni)
//     {
//         cout<<"ENTER DETAIL OF STUDENT"<<endl;
//         cout<<"ENTER ROLL_NO : "<<endl;
//         cin>>uni.roll_no;
//         cout<<"ENTER NAME : "<<endl;
//         cin>>uni.name;
//     }
// void student::displaydata(university& uni)
//     {
//         cout<<"YOUR ENTERED DETAIL"<<endl;
//         cout<<"STUDENT NAME : "<<uni.name;
//         cout<<"STUDENT ROLL NO : "<<uni.roll_no;
//     }

// int main()
// {
//     university uni_obj;
//     student student_obj;

//     student_obj.getdata(uni_obj);
//     student_obj.displaydata(uni_obj);
//     return 0;
// }
#include <iostream>
#include <string>
using namespace std;

class university;
class student
{
    public :
    void displaydata(university& uni);
};
class university{
    private :
        int roll_no=10;
    protected :
        string first_name="moin";
        string last_name="vadnagarwala";
    public : 
        friend class student;
};
void student::displaydata(university& uni)
{
    cout<<"ROLL NO :"<<uni.roll_no;
    cout<<"FIRST NAME : "<<uni.first_name;
    cout<<"LAST NAME : "<<uni.last_name;
};

int main()
{
    university uni_obj;
    student stu_obj;
    stu_obj.displaydata(uni_obj);
    return 0;
}