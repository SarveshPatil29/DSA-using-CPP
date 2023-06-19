// https://leetcode.com/problems/count-primes/

class Solution
{
public:
  int countPrimes(int N)
  {
    vector<int> arr(N, 1);
    int ans = 0;
    int i = 2;
    for (; i * i < N; i++)
    {
      if (arr[i] == -1)
      {
        continue;
      }
      ans++;
      for (int j = i * i; j < N; j += i)
      {
        if (arr[j] != -1)
        {
          arr[j] = -1;
        }
      }
    }

    for (; i < N; i++)
    {
      if (arr[i] != -1)
      {
        ans++;
      }
    }

    return ans;
  }
};