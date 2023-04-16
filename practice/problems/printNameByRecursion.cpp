#include <iostream>
using namespace std;

void print(int count, int n)
{
  if (count > n)
  {
    return;
  }
  cout << "Sarvesh" << endl;
  print(count + 1, n);
}

int main()
{
  int n = 0;
  cin >> n;
  int count = 1;
  print(count, n);

  return 0;
}