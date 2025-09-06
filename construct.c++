#include<iostream>
using namespace std;
 
class employee
{
    public:
  string name;
  int salary;
  int age;
  // Default constructor
   employee()
   {
    name= "Ram Bhatt";
    salary = 20000;
    age = 24;
   }
   
   void display()
   {
    cout<<name<<" "<<salary<<" "<<age<<endl;
   }
};
int main()
{
    cout<<"Employee Details:"<<endl;
    employee A1;
    employee A2;
    employee A3;
    A1.display();
    A2.display();
    A3.display();
}