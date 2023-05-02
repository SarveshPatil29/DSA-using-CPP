// https://leetcode.com/problems/maximum-number-of-coins-you-can-get/

class Solution
{
public:
  int maxCoins(vector<int> &piles)
  {
    sort(piles.begin(), piles.end(), greater<int>());
    int size = piles.size();
    int ans = 0;
    int i = 1;
    int j = size - 1;

    while (i < j)
    {
      ans += piles[i];
      i += 2;
      j--;
    }

    return ans;
  }
};