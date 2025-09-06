#include<iostream>
using namespace std;
int main()
{
    int *num1 = new int;
    int *num2 = new int;
    int sum;

    cout<<"Enter the first number:";
    cin>>*num1;

    cout<<"Enter the 2nd number:";
    cin>>*num2;

    sum = *num1 + *num2;

    cout<<"The sum is: "<<sum<<endl;

    delete num1;
    delete num2;
    return 0;
}