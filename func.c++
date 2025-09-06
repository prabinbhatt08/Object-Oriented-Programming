#include<iostream>
using namespace std;
 
void myfunction(string name, int roll_number, int age)
{
    cout<<name<<" Bhatt "<<roll_number<<" "<<age<<" "<<endl;

}
int main()
{
    myfunction("Prabin", 28, 21);
    myfunction("Surendra", 29, 21);
    myfunction("Gaurav", 10, 20);
   return 0;
}