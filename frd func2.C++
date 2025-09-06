#include<iostream>
using namespace std;
class box
{
    private:
    int length = 10;
    public:
    friend void showlength(box);
};

void showlength(box b)
{
    cout<<"Length:" <<b.length<<endl;
}
int main()
{
    box mybox;
    showlength(mybox);
    return 0;
}