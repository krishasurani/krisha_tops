// Write a program to swap the two numbers using friend function without using third variable 

#include <iostream>
using namespace std;

class Swapper {
private:
    int num1;
    int num2;

public:
    Swapper(int a, int b) : num1(a), num2(b) {}

    void swapUsingReference(Swapper& other) {
        num1 ^= num2;
        num2 ^= num1;
        num1 ^= num2;
    }

    void print() {
        cout << "num1: " << num1 << ", num2: " << num2 << endl;
    }
};

int main() {
    int x = 5, y = 10;
    Swapper s(x, y);

    cout << "Before swap: ";
    s.print();

    s.swapUsingReference(s); 

    cout << "After swap: ";
    s.print();

    return 0;
}
