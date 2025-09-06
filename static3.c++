#include<iostream>
using namespace std;
 class Student
 {
    public:
    string name;
    int roll_no;
    static int count;

    Student(string x, int y)
    {
        name = x;
        roll_no  = y;
        count++;
    }
    void showdata()
    {
        cout<<"Name of the Student: "<<name<<endl;
        cout<<"Roll no of the student: "<<roll_no<<endl;
        cout<<"Total Students: "<<count<<endl;
    }
    static void showcount()
    {
        cout<<"Total Number of Student: "<<count<<endl;
    }
 };
 int Student::count = 0;
 int main()
 {
    Student A1("Prabin Bhatt", 28);
    Student A2("Bikash Nepali", 13);
    A1.showdata();
    A2.showdata();
    Student A3("Sammy", 36);
    A3.showdata();
    Student::showcount();
    return 0;
 }