// https://leetcode.com/problems/restore-the-array/

class Solution
{
public:
  const int MOD = 1e9 + 7;
  int solve(int start, string &s, int &k, vector<int> &dp, int &size)
  {
    if (start >= size)
    {
      return 1;
    }

    if (dp[start] != -1)
    {
      return dp[start];
    }

    if (s[start] == '0')
    {
      dp[start] = 0;
      return 0;
    }
    int ans = 0;
    long long num = 0;
    for (int end = start; end < size; end++)
    {
      num = (num * 10) + (s[end] - '0');
      if (num > k)
      {
        break;
      }
      ans = (ans % MOD + solve(end + 1, s, k, dp, size) % MOD) % MOD;
    }

    dp[start] = ans;
    return ans;
  }

  int numberOfArrays(string s, int k)
  {
    int size = s.length();
    vector<int> dp(size, -1);

    return solve(0, s, k, dp, size);
  }
};