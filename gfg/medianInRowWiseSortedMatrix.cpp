// https://practice.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1

class Solution
{
public:
  int countLessThanEqualTo(vector<int> &arr, int mid)
  {
    int start = 0;
    int end = arr.size() - 1;
    int m = start + (end - start) / 2;

    while (start <= end)
    {
      if (arr[m] <= mid)
      {
        start = m + 1;
      }
      else
      {
        end = m - 1;
      }

      m = start + (end - start) / 2;
    }
    return start;
  }
  int median(vector<vector<int>> &matrix, int R, int C)
  {
    int low = 0;
    int high = 1e9;
    int mid = low + (high - low) / 2;
    int n = matrix.size();
    int m = matrix[0].size();

    while (low <= high)
    {
      int count = 0;
      for (int i = 0; i < n; i++)
      {
        count += countLessThanEqualTo(matrix[i], mid);
      }

      if (count > n * m / 2)
      {
        high = mid - 1;
      }
      else
      {
        low = mid + 1;
      }

      mid = low + (high - low) / 2;
    }
    return low;
  }
};