#include<iostream>
using namespace std;
 class demo
 {
    private:
    int a;
    public:
    void getdata()
    {
        cout<<"\nEnter the no:";
        cin>>a;
    }
    void putdata()
    {
        cout<<"\nValue of a="<<a;
    }
    demo operator* (demo bb)
    {
        demo cc;
        cc.a = a*bb.a;
        return cc;
    }
 };
 int main()
 {
    demo aa,bb,cc;
    aa.getdata();
    bb.getdata();
    cc = aa*bb;
    aa.putdata();
    bb.putdata();
    cc.putdata();
    return 0;
 }