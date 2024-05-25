//Write a program of to swap the two values using template

#include <iostream>
using namespace std;

template <typename T>
void swapValues(T& a, T& b) {
  T temp = a;
  a = b;
  b = temp;
}

int main() {
  int x = 5, y = 10;
  double p = 3.14, q = 2.72;
  char c1 = 'A', c2 = 'B';

  cout << "Before swap: x = " << x << ", y = " << y << endl;
  cout << "Before swap: p = " << p << ", q = " << q << endl;
  cout << "Before swap: c1 = " << c1 << ", c2 = " << c2 << endl;

  swapValues(x, y);
  swapValues(p, q);
  swapValues(c1, c2);

  cout << "After swap: x = " << x << ", y = " << y << endl;
  cout << "After swap: p = " << p << ", q = " << q << endl;
  cout << "After swap: c1 = " << c1 << ", c2 = " << c2 << endl;

  return 0;
}
