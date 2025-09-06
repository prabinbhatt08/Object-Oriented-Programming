#include<iostream>
using namespace std;
//Hierarchical Inheritance
class Human
{
    protected:
    string name;
    public:
    void introduce()
    {
        cout<<"My self "<<name<<endl;
    }
};
class Teacher: public Human{
    protected:
    int age;
    public:
    void show()
    {
        cout<<"My age is "<<age<<endl;
    }

};
class Student: public Teacher{
    int roll_no;
    public:
    Student(string name, int age, int roll_no)
    {
        this->name = name;
        this->age = age;
        this-> roll_no = roll_no;
    }
    void details()
    {
        cout<<"My roll_no is "<<roll_no<<endl;
    }
};
int main(){
    Student A1("Surendra Bhatt", 21, 36);
    A1.introduce();
    A1.show();
    A1.details();
}