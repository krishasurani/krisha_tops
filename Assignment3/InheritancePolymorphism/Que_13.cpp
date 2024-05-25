//Write a program to find the max number from given two numbers using friend function 

#include <iostream>
using namespace std;

class NumberHolder {
private:
  int num1;

public:
  NumberHolder(int n) : num1(n) {}

  friend int findMax(const NumberHolder& n1, const NumberHolder& n2);
};

int findMax(const NumberHolder& n1, const NumberHolder& n2) {
  return (n1.num1 > n2.num1) ? n1.num1 : n2.num1;
}

int main() {
  int num_1 = 15;
  int num_2 = 20;

  NumberHolder holder1(num_1);
  NumberHolder holder2(num_2);

  int max_num = findMax(holder1, holder2);

  cout << "Maximum number: " << max_num << endl;

  return 0;
}
