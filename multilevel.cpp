#include <iostream>
using namespace std;
class Person
{
    protected:
    string name;
    public:
    void introduce()
    {
        cout<<"My name is:"<<name<<endl;
    }
};
class Employee: public Person
{
    protected:
    int salary;
    public:
    void monthly_salary()
    {
        cout<<"My monthly salary is:"<<salary<<endl;
    }
};
class manager: public Employee
{
    public:
    string department;
    manager(string name, int salary, string department)
    {
        this->name = name;
        this->salary = salary;
        this->department = department;
    }
    void work()
    {
        cout<<"Iam leading the department"<<department<<endl;
    }
};
int main()
{
    manager A1("Prabin Bhatt", 200000, " Engineering");
    A1.introduce();
    A1.work();
    A1.monthly_salary();
}
