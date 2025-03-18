// // For N = 3
// ABC
// DEF
// GHI

#include <iostream>
using namespace std;

int main()
{
  int n, i, j;
  char ch = 'A';

  cout << "Enter Value of N: ";
  cin >> n;

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      cout << ch << "\t";
      ch++;
    }
    cout << "\n";
  }
  return 0;
}