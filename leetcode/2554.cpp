// https://leetcode.com/problems/maximum-number-of-integers-to-choose-from-a-range-i/

class Solution
{
public:
  int maxCount(vector<int> &banned, int n, int maxSum)
  {
    int sum = 0;
    int ans = 0;
    set<int> elems;

    for (int i = 0; i < banned.size(); i++)
    {
      elems.insert(banned[i]);
    }

    for (int i = 1; i <= n; i++)
    {
      if (sum + i <= maxSum)
      {
        if (!elems.count(i))
        {
          sum += i;
          ans++;
        }
      }
      else
      {
        break;
      }
    }

    return ans;
  }
};