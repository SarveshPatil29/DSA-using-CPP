// https://leetcode.com/problems/find-peak-element/

class Solution
{
public:
  int findPeakElement(vector<int> &nums)
  {
    int n = nums.size();
    int low = 0;
    int high = nums.size() - 1;
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

// class Solution
// {
// public:
//   int findPeakElement(vector<int> &nums)
//   {
//     for (int i = 0; i < nums.size(); i++)
//     {
//       if (i + 1 == nums.size() || (i + 1 < nums.size() && nums[i] > nums[i + 1]))
//       {
//         if (i - 1 == -1 || i - 1 > -1 && nums[i] > nums[i - 1])
//         {
//           return i;
//         }
//       }
//     }
//     return -1;
//   }
// };