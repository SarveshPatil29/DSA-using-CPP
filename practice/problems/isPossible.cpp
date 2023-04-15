#include <iostream>
using namespace std;

bool findIsPossible(int a, int b, int c, int d)
{
  if (a > c || b > d)
  {
    return false;
  }
  if (a == c && b == d)
  {
    return true;
  }

  return (findIsPossible(a + b, b, c, d) || findIsPossible(a, b + a, c, d));
}

int main()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  if (findIsPossible(a, b, c, d))
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}