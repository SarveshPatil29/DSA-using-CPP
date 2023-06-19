// https://practice.geeksforgeeks.org/problems/power-of-numbers-1587115620/1

class Solution
{
public:
  // You need to complete this fucntion

  long long power(int N, int R)
  {
    if (R == 1)
      return N;
    if (R == 0)
      return 1;
    long long int ans = power(N, R / 2) % mod;
    ans = (ans * ans) % mod;
    return (R % 2 == 0) ? ans : (N * ans) % mod;
  }
};