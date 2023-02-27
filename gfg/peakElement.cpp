// https://practice.geeksforgeeks.org/problems/peak-element/1

class Solution
{
public:
  int peakElement(int nums[], int n)
  {
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
      int mid = (low + high) >> 1;
      if (nums[mid] > nums[mid + 1])
      {
        high = mid;
      }
      else
      {
        low = mid + 1;
      }
    }
    return low;
  }
};