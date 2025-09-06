#include <iostream>
using namespace std;

class Number
{
    private:
    int value;
    public:
    Number(int value)
    {
        this->value = value;
    }
    //friend function declaration
    friend int square(Number N);
};
// Friend function definition
int square(Number N){
    return N.value * N.value;
}
// Main function to test the code
int main()
{
    Number num(11);
    cout << "The Square of the Number: = "<< square(num) << endl;
    return 0;
}


