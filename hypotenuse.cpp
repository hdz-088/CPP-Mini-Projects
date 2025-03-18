// Program to Find Hypotenuse of a Right Angle Triangle

#include <iostream>
#include <cmath>

int main()
{

  int a, b, c;

  std::cout << "Hypotenuse of Right Angle Triangle" << std::endl;

  std::cout << "Enter Side A: ";
  std::cin >> a;

  std::cout << "Enter Side B: ";
  std::cin >> b;

  c = sqrt(pow(a, 2) + pow(b, 2));
  std::cout << "Hypotenuse C = " << c;

  return 0;
}