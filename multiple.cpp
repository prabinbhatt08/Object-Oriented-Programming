#include<iostream>
using namespace std;
 class Engineer
 {
    public:
    string specialization;

    void work()
    {
        cout<<"I have specialization in: "<<specialization<<endl;
    }

 };

 class Youtuber
 {
    public:
    int subscribers;
 
 void content_creater()
 {
    cout<<"I have a subscriber base of: "<<subscribers<<endl;
 }
};

 class CodeTeacher: public Engineer, public Youtuber
 {
    public:
    string name;

    CodeTeacher(string name, string specialization, int subscribers)
    {
        this->name = name;
        this->specialization = specialization;
        this->subscribers = subscribers;
    }
    void showcase()
    {
        cout<<"My name is: "<<name<<endl;
        work();
        content_creater();
    }
 };

 int main()
 {
    CodeTeacher A1("Prabin Bhatt","CSE", 123);
    A1.showcase();
 }