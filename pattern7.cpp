// For n = 3
// *
// **
// ***
// **
// *

#include <iostream>
using namespace std;

int main()
{
  int n, i, j;
  cout << "Enter Value of N: ";
  cin >> n;

  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= i; j++)
    {
      cout << "*";
    }
    cout << "\n";
  }

  for (i = n - 1; i >= 1; i--)
  {
    for (j = 1; j <= i; j++)
    {
      cout << "*";
    }
    cout << "\n";
  }

  return 0;
}