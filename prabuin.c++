#include<iostream>
using namespace std;
class employee
{
    private:
    int salary;
    int age;
    public:
    employee(int salary, int age){
        this->salary = salary;
        this->age = age;
    }
    friend void displaydetails(employee emp);
};
void displaydetails(employee emp) {
 cout<<"Salary:"<<emp.salary<<endl;
 cout<<"Age:"<<emp.age<<endl;
}
int main()
{
    cout<<"Details of Employee"<<endl;
    employee emp(10000, 24);
    displaydetails(emp);
}