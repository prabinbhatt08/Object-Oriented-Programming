#include <iostream>
using namespace std;

// Forward declaration
class B;

class A {
private:
    int numA;

public:
    A(int x) {
        numA = x;
    }

    // Declare friend function
    friend int add(A, B);
};

class B {
private:
    int numB;

public:
    B(int y) {
        numB = y;
    }

    // Declare friend function
    friend int add(A, B);
};

// Friend function definition
int add(A objA, B objB) {
    return objA.numA + objB.numB;
}

int main() {
    A obj1(10);
    B obj2(20);

    cout << "Sum = " << add(obj1, obj2) << endl;

    return 0;
}
