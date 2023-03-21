// https://practice.geeksforgeeks.org/problems/smallest-divisor/1

class Solution
{
public:
  int smallestDivisor(vector<int> &nums, int threshold)
  {

    int low = 1;
    int high = 1e9;
    int mid = (low + high) >> 1;
    int size = nums.size();
    int ans = INT_MAX;

    while (low <= high)
    {
      int sum = 0;
      for (int i = 0; i < size; i++)
      {
        sum += ceil((double)nums[i] / mid);
      }

      if (sum <= threshold)
      {
        high = mid - 1;
      }
      else
      {
        low = mid + 1;
      }
      mid = (low + high) >> 1;
    }

    return mid + 1;
  }
};