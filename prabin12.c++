#include<iostream>
using namespace std;
 class student
 {
    private:
    string name;
    static int total_student;
    public:
    //Constructor to set name and increament totalstudent
    student(string n)
    {
        name = n;
        total_student++;
    }
    //Non-static data member function( can access both static and non-static data function)
    void showinfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"Total Student: "<<total_student<<endl;
    }
    //static data member function(acess only static members directly)
    static void showTotalStudents(){
    cout<<"Total Student "<<total_student<<endl;
    }
 };
 //Define and intialize static data member 
 int student::total_student=0;
 int main()
 {
    student S1("Prabin Bhatt");
    student S2("Surendra Bhatt");
    student S3("Gaurav Bhatt");
    student S4("Bikash Nepali");

    cout<<"Show student details\n";
    S1.showinfo();
    S2.showinfo();
    S3.showinfo();
    S4.showinfo();
    cout<<"Static function call\n";
    student::showTotalStudents(); // acess without object
    return 0;

 }
