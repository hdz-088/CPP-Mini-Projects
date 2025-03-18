// For N = 4
// ABCD
// ABCD
// ABCD
// ABCD

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter Value of N: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    char ch = 'A';
    for (int j = 0; j < n; j++)
    {
      cout << ch;
      ch++;
    }
    cout << "\n";
  }
  return 0;
}