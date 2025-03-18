// For n = 3
// 123
// 456
// 789

#include <iostream>
using namespace std;

int main()
{
  int n, i, j;
  cout << "Enter Value of N: ";
  cin >> n;
  int temp = 1;

  for (i = 0; i < n; i++)
  {
    for (j = 1; j <= n; j++)
    {
      cout << temp << "\t";
      temp++;
    }
    cout << "\n";
  }
  return 0;
}