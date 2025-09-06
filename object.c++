 #include<iostream>
 using namespace std;

class Student
{
    public:
    // Data members
    string name;
    int age, rollno;
    string grade;

};
 
int main()
{
    Student S1;
    S1.name= "Prabin Bhatt";
    S1.age = 21;
    S1.rollno = 28;
    S1.grade = "A+";
    cout<<S1.name<<S1.age<<S1.rollno<<S1.grade<<endl;

    Student S2;
    S2.name= "Surendra Bhatt";
    S2.age = 20;
    S2.rollno = 34;
    S2.grade = "A";
    cout<<S2.name<<S2.age<<S2.rollno<<S2.grade<<endl;
}
   



 

