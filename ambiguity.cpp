#include<iostream>
using namespace std;

 class AbstractBase{
    public:
    virtual void display()=0;
 };
 class A: public AbstractBase
 {
    public:
    void display()
    {
     cout<<"Display from class A ";
    }
    void show()
    {
        cout<<"Show function from A ";
    }
 };

 class B: public AbstractBase
 {
    public:
    void display()
    {
        cout<<"Display from class B"<<endl;
    }
    void show()
    {
        cout<<"Show function from B"<<endl;
    }
 };

class C: public A, public B
{
    public:
    void display()
    {
        cout<<"Display from class C"<<endl;
    }
};
int main()
{
    C obj;
    obj.display();

    obj.A::display();
    obj.B::display();
    obj.A::show();
    obj.B::show();
    return 0;
}
