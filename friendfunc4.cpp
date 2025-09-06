#include<iostream>
using namespace std;
class Numbers
{
    protected:
    float x,y;
    public:

    void input()
    {
        cout<<"Enter the value of x :";
        cin>>x;
        cout<<"Enter the value of y :";
        cin>>y;
    }
    
    friend float add(Numbers n);
};
float add(Numbers n){
    return n.x + n.y;
}
int main()
{
 Numbers obj;
 obj.input();

 float results = add(obj);
 cout<<"The sum of the numbers is: "<<results<<endl;
 return 0;
}