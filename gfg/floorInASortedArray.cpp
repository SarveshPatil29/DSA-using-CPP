// https://practice.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1

class Solution
{
public:
  // Function to find floor of x
  // n: size of vector
  // x: element whose floor is to find
  int findFloor(vector<long long> v, long long n, long long x)
  {

    long long s = 0;
    long long e = n - 1;
    long long m = s + (e - s) / 2;

    while (s <= e)
    {
      if (v[m] == x)
      {
        return m;
      }
      else if (v[m] < x)
      {
        s = m + 1;
      }
      else
      {
        e = m - 1;
      }

      m = s + (e - s) / 2;
    }

    return m - 1;
  }
};