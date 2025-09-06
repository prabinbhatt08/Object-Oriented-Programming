#include<iostream>
using namespace std;

class Complex

{
    float real;
    float img;

    public:
    Complex(float r = 0, float i = 0)
    {
        real = r;
        img = i;
    }
    
    Complex operator *(const Complex &obj)
    {
        Complex temp;
        temp.real = real * obj.real;
        temp.img = img * obj.img;
        return temp;
        
    }
    void display()
    {
        cout<<real<<" * "<<img<<"i "<<endl;
    }
};
int main()
{
     Complex c1(3.4, 4.5), c2(5.5, 3.6), c3;

    c3= c1*c2;
    cout<<"First Complex Number ";
    c1.display();

    cout<<"Second Complex Number ";
    c2.display();

    cout<<"multiple of Complex Number ";
    c3.display();

    return 0;
    
}