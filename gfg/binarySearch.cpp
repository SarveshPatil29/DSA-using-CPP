// https://practice.geeksforgeeks.org/problems/binary-search-1587115620/1

class Solution
{
public:
  int binarysearch(int arr[], int n, int k)
  {
    int s = 0;
    int e = n - 1;
    int m = s + (e - s) / 2;

    while (s <= e)
    {
      if (arr[m] == k)
      {
        return m;
      }
      else if (arr[m] > k)
      {
        e = m - 1;
      }
      else
      {
        s = m + 1;
      }
      m = s + (e - s) / 2;
    }

    return -1;
  }
};