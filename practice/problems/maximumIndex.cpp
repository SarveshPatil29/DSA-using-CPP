#include <iostream>

using namespace std;

int main()
{
  int steps;
  int badIndex;

  cin >> steps >> badIndex;

  int i = 0;
  int j = 1;

  for (int k = 0; k < steps; k++)
  {
    if (i + j == badIndex)
    {
      i--;
    }
    i += j;
    j++;
  }

  cout << i << endl;

  return 0;
}