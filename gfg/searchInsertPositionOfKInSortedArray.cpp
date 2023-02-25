// https://practice.geeksforgeeks.org/problems/search-insert-position-of-k-in-a-sorted-array/1

class Solution
{
public:
  int searchInsertK(vector<int> Arr, int N, int k)
  {
    int s = 0;
    int e = N - 1;
    int m = s + (e - s) / 2;

    while (s <= e)
    {
      if (Arr[m] == k)
      {
        return m;
      }
      else if (Arr[m] < k)
      {
        s = m + 1;
      }
      else
      {
        e = m - 1;
      }

      m = s + (e - s) / 2;
    }

    return m;
  }
};