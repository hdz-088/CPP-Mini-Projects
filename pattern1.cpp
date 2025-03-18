// For n=4
// 1234
// 1234
// 1234
// 1234

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter Value of N: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      cout << j;
    }
    cout << "\n";
  }
  return 0;
}