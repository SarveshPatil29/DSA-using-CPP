#include <iostream>
using namespace std;

void print(int num, int n)
{
  if (num > n)
  {
    return;
  }
  cout << num << " ";
  print(num + 1, n);
}

int main()
{
  int n = 0;
  cin >> n;

  print(1, n);

  return 0;
}