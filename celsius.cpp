#include<iostream>
using namespace std;
class Celsius
{
    float celsius;
    public:
    void setcelsius(float c)
    {
        celsius = c;
    }
    void display()
    {
        cout<<"Temperature in celsius: "<<celsius<< "C"<<endl;
    }
};
 class Fahrenheit
 {
    float fahrenheit;
    public:
    void input()
    {
        cout<<"Enter temperature in Fahrenheit: ";
        cin>>fahrenheit;
    }
    float getFahrenheit(){
        return fahrenheit;
    }
 };
 int main()
 {
 Fahrenheit f;
 Celsius c;

 f.input();
 float tempC = (f.getFahrenheit()-32)* 5.0 / 9.0;
 c.setcelsius(tempC);
 c.display();
 }

 