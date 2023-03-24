// https://practice.geeksforgeeks.org/problems/minimum-distinct-ids3251/1

class Solution
{
public:
  int distinctIds(int arr[], int n, int m)
  {
    if (m > n)
      return 0;

    map<int, int> mp;
    for (int i = 0; i < n; i++)
      mp[arr[i]]++;

    vector<int> v;
    for (auto x : mp)
    {
      v.push_back(x.second);
    }
    sort(v.begin(), v.end());

    int count = 0;
    int i = 0;
    while (m > 0)
    {
      m = m - v[i];
      if (m >= 0)
      {
        count++;
      }
      else
      {
        break;
      }
      i++;
    }

    return mp.size() - count;
  }
};