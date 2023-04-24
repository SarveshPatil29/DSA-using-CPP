#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> sortByBits(vector<int> &arr)
{
  vector<pair<int, int>> bits;
  vector<int> ans;
  for (int j = 0; j < arr.size(); j++)
  {
    // for(int i = 0; i<=arr[i]; i++)

    int sum = 0;
    int num = arr[j];
    while (num != 0)
    {
      sum += num % 2;
      num = num / 2;
    }
    bits.push_back({sum, arr[j]});
  }
  // }
  sort(bits.begin(), bits.end());
  for (int i = 0; i < arr.size(); i++)
  {
    ans.push_back(bits[i].second);
  }
  // }
  return ans;
}

int main()
{
  vector<int> arr{31, 7, 2, 3, 15};
  vector<int> ans = sortByBits(arr);

  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i];
  }

  return 0;
}