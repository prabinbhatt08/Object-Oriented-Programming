#include<iostream>
using namespace std;
//student
//boy
//girl
//male
//female
class Student
{
    public:
    void print()
    {
        cout<<"Iam a student"<<endl;
    }
};
class male
{
    public:
    void maleprint()
    {
        cout<<"Iam male"<<endl;
    }
};
class female
{
    public:
    void femleprint()
    {
        cout<<"Iam female"<<endl;
    }
};
class Boy: public Student, public male
{
    public:
    void boyprint()
    {
        cout<<"Iam a boy"<<endl;
    }
};
class Girl: public Student, public female
{
    public:
    void girlprint()
    {
        cout<<"Iam a girl"<<endl;
    }
};
int main()
{
    Girl G1;
    G1.girlprint();
    Boy B1;
    B1.boyprint();
    male M1;
    M1.maleprint();
    female F1;
    F1.femleprint();
}