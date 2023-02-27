// https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1

class Solution
{
public:
  /* if x is present in arr[] then returns the count
    of occurrences of x, otherwise returns 0. */
  int count(int nums[], int n, int target)
  {
    int s = 0;
    int e = n - 1;
    int m = s + (e - s) / 2;
    int i = -1;
    while (s <= e)
    {
      if (nums[m] == target)
      {
        i = m;
        break;
      }
      else if (nums[m] > target)
      {
        e = m - 1;
      }
      else
      {
        s = m + 1;
      }

      m = s + (e - s) / 2;
    }

    int j = i;
    while (j >= 0 && nums[j] == target)
    {
      j--;
    }
    j++;
    int ans = 0;

    while (j < n && nums[j] == target)
    {
      ans++;
      j++;
    }

    return ans;
  }
};