#include<iostream>
using namespace std;
class Area
{
    public:
    float calculateArea(int r)
    {
        return 3.14*r*r;
    }
    int calculateArea(int l, int b)
    {
        return l*b;
    }
};
int main()
{
    Area A1,A2;
    cout<<A1.calculateArea(3)<<endl;
    cout<<A2.calculateArea(3,4)<<endl;
    return 0;
}