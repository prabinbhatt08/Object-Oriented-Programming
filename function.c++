#include<iostream>
using namespace std;
class employee
{
    private:
    int salary;
    int age;
    public:
    employee(int salary, int age)
    {
        this->salary = salary;
        this->age = age;
    }
    
    //Declare friend functions
    friend void displaysalary(employee &emp);
    friend void displayage(employee &emp);
};

void displaysalary(employee &emp) {
    cout<< "The Salary of Employee is: " << emp.salary <<endl;

}
void displayage(employee &emp)
{
    cout << "The Age of Employee is: " << emp.age<< endl;
}
int main() {
    employee emp(50000,30);
    displaysalary(emp);
    displayage(emp);

    return 0;
}
