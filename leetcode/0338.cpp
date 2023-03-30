// https://leetcode.com/problems/counting-bits/

class Solution
{
public:
  vector<int> countBits(int n)
  {
    vector<int> ans(n + 1, 0);
    for (int i = 0; i <= n; i++)
    {
      int countOfOne = 0;
      int num = i;
      while (num)
      {
        if (num % 2 == 1)
        {
          countOfOne++;
        }
        num /= 2;
      }

      ans[i] = countOfOne;
    }

    return ans;
  }
};