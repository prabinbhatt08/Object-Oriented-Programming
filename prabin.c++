#include<iostream>
using namespace std;
class box
{
    private:
    int length = 10;
    int breadth = 5;
    public:
    friend void showdetails(box);
};

void showdetails(box mybox)
{
    cout<<" The Length of box is:" <<mybox.length<<endl;
    cout<<" The Breadth of box is:" <<mybox.breadth<<endl;
}
int main()
{
    box mybox;
    showdetails(mybox);
    return 0;
}