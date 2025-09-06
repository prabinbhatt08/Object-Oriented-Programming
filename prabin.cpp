#include<iostream>
using namespace std;
class Complex{
    public:
int x;
int y;
Complex(){
    x=0;
    y=0;
}
Complex(int a, int b){
    x=a;
    y=b;

}
 Complex operator +(Complex obj){
    complex temp;
    temp.x=x+obj.x;
    temp.y=y+obj.y;
    return temp;
}
void display(){

}
};


int main(){
    Complex obj1(3,4);
    Complex obj2(5,6);
    Complex obj3;
    obj3=obj1+obj2;

     cout<<"The value of obj1+obj2"<<obj3.x<<endl;
     cout<<"The value of y"<<obj3.y<<endl;
     
    
    return 0;
}