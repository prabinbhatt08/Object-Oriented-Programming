#include<iostream>
using namespace std;

class Customer
{
    string name;
    int account_number;
    int balance;
    static int total_Customer;
    public:
    Customer(string name, int account_number, int balance)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        total_Customer++;
    }
    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<total_Customer<<endl;
    }
    void display_total()
    {
        cout<<total_Customer<<endl;
    }

};
int Customer::total_Customer = 0;

int main()
{
  Customer A1("Prabin Bhatt", 12345231, 10000);
  Customer A2("John Doe", 987654321, 5000);
  A2.display_total();
  Customer A3("Bikash", 112233445, 3000);
  A3.display_total();
  Customer A4("Surendra Bhatt", 892928222, 20000);
  A4.display_total();
  Customer A5("Sandhya Saud", 123422122, 250000);
  A5.display_total();
};
