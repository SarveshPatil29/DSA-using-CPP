// https://leetcode.com/problems/jewels-and-stones/

class Solution
{
public:
  int numJewelsInStones(string jewels, string stones)
  {
    unordered_map<char, int> map;

    for (int i = 0; i < stones.length(); i++)
    {
      map[stones[i]]++;
    }

    int ans = 0;
    for (int i = 0; i < jewels.length(); i++)
    {
      ans += map[jewels[i]];
    }

    return ans;
  }
};