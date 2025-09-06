#include<iostream>
using namespace std;
//single inheritance
class person
{
    public:
    string name;
    public:
    void details()
    {
        cout<<"My name is: "<<name<<endl;
    }
};
class student: public person
{
    int age,roll_no;
    public:
    student(string name, int age, int roll_no)
    {
        this->name = name;
        this->age = age;
        this->roll_no = roll_no;
    }
    void display()
    {
        cout<<name<<" "<<age<<" "<<roll_no<<endl;
    }
};
int main()
{
    student A1("Prabin Bhatt", 21, 28);
    A1.display();
    A1.details();
    return 0;
}

