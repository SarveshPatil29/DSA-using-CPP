// https://practice.geeksforgeeks.org/problems/maximize-number-of-1s0905/1

class Solution
{
public:
  // m is maximum of number zeroes allowed to flip
  // n is size of array
  int findZeroes(int arr[], int n, int m)
  {
    int zeroCount = 0;
    int i = 0;
    int ans = 0;

    for (int j = 0; j < n; j++)
    {
      if (arr[j] == 0)
      {
        zeroCount++;
      }

      while (zeroCount > m)
      {
        if (arr[i] == 0)
        {
          zeroCount--;
        }
        i++;
      }

      ans = max(ans, j - i + 1);
    }

    return ans;
  }
};