// https://leetcode.com/problems/minimum-bit-flips-to-convert-number/

class Solution
{
public:
  int minBitFlips(int start, int goal)
  {
    int ans = 0;
    int temp = start ^ goal;

    while (temp)
    {
      if (temp & 1)
      {
        ans++;
      }
      temp = temp >> 1;
    }
    return ans;
  }
};