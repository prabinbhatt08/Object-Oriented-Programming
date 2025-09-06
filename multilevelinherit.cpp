#include<iostream>
using namespace std;
class Person
{
    protected:
    string name;
    public:
    void introduce()
    {
        cout<<"Myself "<<name<<endl;
    }
};
 class Employee: public Person
 {
    protected:
    int id_number;
    public:
    void show()
    {
        cout<<"My id_number is :"<<id_number<<endl;
    }
 };
 class Social_Worker: public Employee
 {
    protected:
    int Citizenship_no;
    public:
    void display()
    {
        cout<<"My citizenship number is :"<<Citizenship_no<<endl;
    }
 };
 class Engineer: public Social_Worker
 {
public:
string department;
Engineer(string name, int id_number, int citizenship_no, string department)
{
    this->name = name;
    this->id_number = id_number;
    this->Citizenship_no = citizenship_no;
    this->department = department;
}
void details()
{
    cout<<"Iam leading the department of:"<<department<<endl;
}
 };
 int main()
 {
    Engineer E1("Prabin Bhatt", 28, 1002733, "Engineer");
    E1.introduce();
    E1.details();
    E1.display();
    E1.show();
    
 }
