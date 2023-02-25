// https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1

class Solution
{
public:
  int *findTwoElement(int *arr, int n)
  {
    unordered_map<int, int> map;

    int repeated = -1;
    int missing = -1;

    for (int i = 0; i < n; i++)
    {
      if (map.find(arr[i]) != map.end())
      {
        repeated = arr[i];
      }
      else
      {
        map[arr[i]] = 1;
      }
    }

    for (int i = 1; i <= n; i++)
    {
      if (map.find(i) == map.end())
      {
        missing = i;
      }
    }

    int *ans = new int[2];
    ans[0] = repeated;
    ans[1] = missing;

    return ans;
  }
};