// https://practice.geeksforgeeks.org/problems/max-sum-in-sub-arrays0824/0

class Solution
{
public:
  long long pairWithMaxSum(long long arr[], long long N)
  {
    long long res = arr[0] + arr[1];
    for (int i = 1; i < N - 1; i++)
    {
      res = max(res, arr[i] + arr[i + 1]);
    }
    return res;
  }
};