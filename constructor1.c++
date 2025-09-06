#include<iostream>
using namespace std;
class Student
{
    public:
    string name;
    int age;
    //Parameterized constructor
    Student(string name, int age)
    {
        this-> name = name;
        this-> age = age;
    }
    //Copy Constructor
    Student(Student &obj)
    {
        name = obj.name;
        age = obj.age;
    }
    void display()
    {
        cout<<"My name is:"<<name<<endl;
        cout<<"My age is:"<<age<<endl;
    }
};
int main(){
    Student A1("Sammy", 20);
    A1.display();
    Student A2(A1);
    A2.display();
    return 0;
}
