// https://leetcode.com/problems/bulb-switcher/

class Solution
{
public:
  int bulbSwitch(int n)
  {
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
      int squareRoot = sqrt(i);
      if (squareRoot * squareRoot == i)
      {
        ans++;
      }
    }

    return ans;
  }
};