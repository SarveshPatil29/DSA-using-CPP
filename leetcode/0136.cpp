// https://leetcode.com/problems/single-number/

class Solution
{
public:
  int singleNumber(vector<int> &nums)
  {
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
      ans ^= nums[i];
    }

    return ans;
  }
};

// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         for(int i = 0; i<nums.size(); i++) {
//             if(i<nums.size()-1 && nums[i] == nums[i+1]) {
//                 i++;
//             }
//             else if(i==nums.size()-1) {
//                 return nums[i];
//             }
//             else {
//                 return nums[i];
//             }
//         }

//         return 0;
//     }
// };