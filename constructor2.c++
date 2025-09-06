#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int age;
    int symbol_no;

   student(){
   name = "Ram";
   age = 21;
   symbol_no = 23342;
   }
   void display(){
   cout<<name<<" "<<age<<" "<<symbol_no<<endl;
   }
};
int main()
{
   student A1;
   A1.display();
}