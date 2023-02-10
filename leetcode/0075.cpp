// https://leetcode.com/problems/sort-colors/

class Solution
{
public:
  void sortColors(vector<int> &nums)
  {
    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;

    while (mid <= high)
    {
      if (nums[mid] == 0)
      {
        swap(nums[mid], nums[low]);
        mid++;
        low++;
      }
      else if (nums[mid] == 2)
      {
        swap(nums[mid], nums[high]);
        high--;
      }
      else
      {
        mid++;
      }
    }
  }
};

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int zeroCount = 0;
//         int oneCount = 0;
//         int twoCount = 0;

//         for(int i = 0; i<nums.size(); i++) {
//             if(nums[i] == 0) {
//                 zeroCount++;
//             }
//             else if(nums[i] == 1) {
//                 oneCount++;
//             }
//             else {
//                 twoCount++;
//             }
//         }

//         int i = 0;
//         while(i<zeroCount) {
//             nums[i] = 0;
//             i++;
//         }

//         while(i<zeroCount+oneCount) {
//             nums[i] = 1;
//             i++;
//         }

//         while(i<nums.size()) {
//             nums[i] = 2;
//             i++;
//         }
//     }
// };