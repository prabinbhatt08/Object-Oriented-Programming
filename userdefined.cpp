#include<iostream>
using namespace std;

class Distance
{
    public:
    int meter;
    Distance(int m)
    {
        meter = m;
    }
    void display()
    {
        cout<<"Distance "<<meter<<" meters"<<endl;
    }
};
int main()
{
    int basic = 10;
    Distance d = basic; // Conversion from int to distance
    d.display();
    return 0;
}