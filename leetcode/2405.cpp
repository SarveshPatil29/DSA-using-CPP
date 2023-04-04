// https://leetcode.com/problems/optimal-partition-of-string/

class Solution
{
public:
  int partitionString(string s)
  {
    unordered_map<int, int> freq;
    int ans = 0;

    for (int i = 0; i < s.length(); i++)
    {
      if (freq.find(s[i]) == freq.end())
      {
        freq[s[i]]++;
      }
      else
      {
        ans++;
        freq.clear();
        freq[s[i]]++;
      }
    }
    ans++;

    return ans;
  }
};