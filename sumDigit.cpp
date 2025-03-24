// Sum of Digit of a Number, if its in 2 digits it will sum it up to single digit

#include <iostream>
using namespace std;

int sumDigit(int n)
{
  int temp, sum = 0;
  while (n > 0)
  {
    temp = n % 10;
    sum += temp;
    n /= 10;
  }
  return sum;
}

int singleDigit(int n)
{
  while (n > 10)
  {
    n = sumDigit(n);
  }
  return n;
}

int main()
{
  int num;

  cout << "Enter Number: ";
  cin >> num;

  cout << "Sum of Digit of " << num << ": " << singleDigit(num);
  return 0;
}
