// Write a program to swap the two numbers using friend function without using third variable 

#include <iostream>

class Swapper {
private:
    int num1;
    int num2;

public:
    Swapper(int a, int b) : num1(a), num2(b) {}

    void swapUsingReference(Swapper& other) {
        // Swap using XOR operation for efficiency (avoids temporary variable)
        num1 ^= num2;
        num2 ^= num1;
        num1 ^= num2;
    }

    void print() {
        std::cout << "num1: " << num1 << ", num2: " << num2 << std::endl;
    }
};

int main() {
    int x = 5, y = 10;
    Swapper s(x, y);

    std::cout << "Before swap: ";
    s.print();

    s.swapUsingReference(s); // Pass the object by reference

    std::cout << "After swap: ";
    s.print();

    return 0;
}
