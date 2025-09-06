#include<iostream>
using namespace std;
#include<string>
class demo{
    protected:
string name;
int Class;
public:
demo(string n, int c): name(n), Class(c){
    
    cout<<"Base class constructor is called:"<<endl;
}
 virtual void display(){
    cout<<"The name of studen is:"<<name<<"and class is:"<<Class<<endl;
}
};
class test1: public demo{
    protected:
    int roll_no;
    string country;
    public:
    test1(string n, int c, int roll, string coun): demo(n, c), roll_no(roll), country(coun){
        cout<<"derived class constructor is called:"<<endl;

    }
    void display(){
        cout<<"The name of studen is:"<<name<<"and class is:"<<Class<<endl;
        cout<<"The roll no is:"<<roll_no<<"and country is:"<<country<<endl;

    }
};
int main()
{  test1 obj("Prabin", 23, 56, "Nepal");
    obj.demo::display();
    obj.display();
    return 0;
}