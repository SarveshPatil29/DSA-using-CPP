// https://practice.geeksforgeeks.org/problems/find-nth-root-of-m5843/1

class Solution
{
public:
  int NthRoot(int n, int m)
  {
    int low = 0;
    int high = 1e9;
    int mid = (low + high) >> 1;

    while (low <= high)
    {
      if (pow(mid, n) == m)
      {
        return mid;
      }
      else if (pow(mid, n) > m)
      {
        high = mid - 1;
      }
      else
      {
        low = mid + 1;
      }
      mid = (low + high) >> 1;
    }
    return -1;
  }
};