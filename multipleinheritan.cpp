#include<iostream>
using namespace std;
class Person
{
    public:
    string name;
    void introduce()
    {
        cout<<"Myself "<<name<<endl;
    }
};
class Teacher
{
  public:
  int age;
  void display()
  {
    cout<<"My age is "<<age<<endl;
  }
};
class Engineer
{
    public:
    int id_number;
    void show()
    {
        cout<<"My id_number is "<<id_number<<endl;
    }
};
class Youtuber: public Person, public Teacher, public Engineer
{
    public:
    int subscribers;
    Youtuber(string name, int age, int id_number, int subscribers)
    {
        this->name = name;
        this->age = age;
        this->id_number = id_number;
        this->subscribers = subscribers;
    }
    void contentcreater()
    {
        introduce();
        display();
        show();
        cout<<"I have a subscriber base of "<<subscribers<<endl;
    }
};
int main()
{
    Youtuber A1("Prabin Bhatt", 21, 28, 200);
    A1.contentcreater();
    return 0;
}