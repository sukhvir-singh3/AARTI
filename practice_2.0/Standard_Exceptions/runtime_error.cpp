#include <iostream>
#include <stdexcept>

int divide(int dividend, int divisor) {
  if (divisor == 0) {
    throw std::runtime_error("Division by zero!");
  }
  return dividend / divisor;
}

int main() {
  int dividend = 10;
  int divisor = 0;

  try {
    int quotient = divide(dividend, divisor);
    std::cout << "Result: " << quotient << std::endl;
  }
  catch (const std::runtime_error& e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }
}

