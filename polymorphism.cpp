#include<iostream>
using namespace std;
class base
{
    public:
    int m;
    virtual void display()
    {
        cout<<"From base class"<<m<<endl;
    }
};
class derived: public base{
    public:
    int n;
    void display()
    {
        cout<<"From derived class"<<n<<endl;
    }
};
int main()
{
    base*bptr;
    derived*dptr;
    derived d1;
    bptr = &d1;
    dptr = &d1;
    bptr->m=10;
    dptr->n=12;
    dptr->display();
}