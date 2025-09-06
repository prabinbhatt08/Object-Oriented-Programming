#include<iostream>
using namespace std;

class subject
{
    public:
    string name;
};

int main()
{
    subject sub1;
    sub1.name = "English";
    cout<<sub1.name<<"\n";
    return 0;
}
  