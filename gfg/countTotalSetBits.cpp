// https://practice.geeksforgeeks.org/problems/count-total-set-bits-1587115620/1

class Solution
{
public:
  // n: input to count the number of set bits
  // Function to return sum of count of set bits in the integers from 1 to n.
  int solve(int n)
  {
    if (n <= 1)
    {
      return n;
    }

    int x = log2(n);
    return pow(2, x - 1) * x + (n - pow(2, x) + 1) + solve(n - pow(2, x));
  }

  int countSetBits(int n)
  {
    return solve(n);
  }
};