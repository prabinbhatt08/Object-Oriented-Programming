#include<iostream>
using namespace std;

class Customer
{
    string name;
    int account_number;
    int balance;
    public:
    // Default constructor
    Customer()
    {
        name = "Prabin Bhatt";
        account_number = 123456778;
        balance = 1000;
    }
    //Parameterized constructor
     Customer(string x, int y, int z)
      {
        name = x;
        account_number = y;
        balance = z;

      }
      //Constructor overloading
      Customer(string a, int b)
      {
        name = a;
        account_number = b;
      

      }
      // Copy constructor
     Customer(Customer &B)
     {
        name = B.name;
        account_number = B.account_number;
        balance = B.balance;
    
     }

    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
};

int main()
{
    Customer A1;
    Customer A2("John Doe", 987654321, 5000);
    Customer A3("Bikash", 112233445);
    Customer A4(A2);
    A1.display();
    A2.display();
    A3.display();
    A4.display();
};