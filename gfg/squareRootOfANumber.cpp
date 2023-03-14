// https://practice.geeksforgeeks.org/problems/square-root/0

class Solution
{
public:
  long long int floorSqrt(long long int x)
  {
    int low = 0;
    int high = 1e7;
    int mid = (low + high) >> 1;

    while (low <= high)
    {
      if (pow(mid, 2) == x)
      {
        return mid;
      }
      else if (pow(mid, 2) > x)
      {
        high = mid - 1;
      }
      else
      {
        low = mid + 1;
      }
      mid = (low + high) >> 1;
    }
    return mid;
  }
};