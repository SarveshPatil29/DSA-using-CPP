#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int size = 0;
  cin >> size;
  vector<int> num(size, 0);

  for (int i = 0; i < size; i++)
  {
    cin >> num[i];
  }

  sort(num.begin(), num.end());
  int sum = 0;

  for (int i = 1; i < size; i++)
  {
    num[i] = num[i - 1] + num[i];
    sum += num[i];
  }

  cout << sum << endl;

  return 0;
}