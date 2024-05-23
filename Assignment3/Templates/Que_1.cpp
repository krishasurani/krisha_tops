//Write a program of to swap the two values using template

#include <iostream>

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

  std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
  std::cout << "Before swap: p = " << p << ", q = " << q << std::endl;
  std::cout << "Before swap: c1 = " << c1 << ", c2 = " << c2 << std::endl;

  swapValues(x, y);
  swapValues(p, q);
  swapValues(c1, c2);

  std::cout << "After swap: x = " << x << ", y = " << y << std::endl;
  std::cout << "After swap: p = " << p << ", q = " << q << std::endl;
  std::cout << "After swap: c1 = " << c1 << ", c2 = " << c2 << std::endl;

  return 0;
}
