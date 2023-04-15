#include <iostream>
#include <vector>
using namespace std;

int countHighlyProfitableIntervals(vector<int> &values, int k)
{
  int ans = 0;
  int i = 0;
  int j = k - 1;

  while (j < values.size())
  {
    bool toCount = false;
    for (int k = i; k < j; k++)
    {
      if (values[k] <= values[k + 1])
      {
        toCount = true;
      }
      else
      {
        toCount = false;
        break;
      }
    }

    if (toCount)
    {
      ans++;
    }
    i++;
    j++;
  }

  return ans;
}

int main()
{
  int size = 0;
  int k = 0;
  cin >> size;
  cin >> k;
  vector<int> values(size, 0);

  for (int i = 0; i < size; i++)
  {
    cin >> values[i];
  }

  cout << countHighlyProfitableIntervals(values, k) << endl;

  return 0;
}