#include <iostream>

int main() {
  double a, b;
  std::cout << "Ievadiet cetrstura garumu: ";
  std::cin >> a;
  std::cout << "Ievadiet cetrstura platumu: ";
  std::cin >> b;

  double P = (a + b) * 2;
  double S = a * b;

  std::cout << "Cetrstura perimetrs ir " << P << "cm un laukums ir " << S
            << "cm^2";

  std::cout << "Hello World!\n";
}