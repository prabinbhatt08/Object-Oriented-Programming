#include<iostream>
using namespace std;

class Human
{
    protected:
    string name;
    int age;
    
    public:
   Human(string name, int age)
    {
 this->name = name;
 this->age = age;
    }

    void display ()
    {
        cout<<name<<" "<<age<<endl;
    }
};

class Student: public Human{
  int roll_number, fees;
  public:
   Student(string name, int roll_number, int age, int fees):Human(name, age)
   {
    this->roll_number=roll_number;
    this->fees=fees;
   }
  void display()
  {
    cout<<name<<" "<<age<<" "<<roll_number<<" "<<fees<<endl;
  }
};

int main ()
{
  Student A1("Prabin Bhatt", 21, 28, 400000);
  A1.display();
}