// For n = 3
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
  for (i = n; i >= 0; i--)
  {
    for (j = 0; j < i; j++)
    {
      cout << "*";
    }
    cout << "\n";
  }
  return 0;
}