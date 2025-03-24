// Calculate nCrbiomial coefficient for n and r

#include <iostream>
using namespace std;

int fact(int n)
{
  int fact = 1;
  while (n > 0)
  {
    fact *= n;
    n -= 1;
  }
  return fact;
}

int main()
{
  int n, r;
  cout << "Enter n: ";
  cin >> n;

  cout << "\nEnter r: ";
  cin >> r;

  cout << "\nBinomial Coefficient = " << fact(n) / (fact(r) * fact(n - r));

  return 0;
}