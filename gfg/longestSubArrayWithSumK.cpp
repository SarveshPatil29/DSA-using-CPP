// https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1

class Solution
{
public:
  int lenOfLongSubarr(int A[], int N, int K)
  {
    map<int, int> m;
    int l = 0;
    m[0] = -1;
    int sum = 0;

    for (int i = 0; i < N; i++)
    {
      sum += A[i];
      if (m.find(sum - K) != m.end())
      {
        l = max(l, i - m[sum - K]);
      }
      if (m.find(sum) == m.end())
      {
        m[sum] = i;
      }
    }

    return l;
  }
};