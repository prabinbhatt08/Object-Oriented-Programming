#include<iostream>
using namespace std;
class Counter
{
    public:
    static int count;
    Counter()
    {
        count++;
    }
    static void show(){
         cout<< "Total Object"<<count<<endl;
    }

};

int  Counter::count=0;
int main()
{
    Counter obj1;
    Counter obj2;
    Counter obj3;
    Counter::show();
}