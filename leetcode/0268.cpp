// https://leetcode.com/problems/missing-number/

class Solution
{
public:
  int missingNumber(vector<int> &nums)
  {
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
      ans ^= nums[i];
      ans ^= i + 1;
    }
    return ans;
  }
};

// class Solution
// {
// public:
//   int missingNumber(vector<int> &nums)
//   {
//     sort(nums.begin(), nums.end());

//     for (int i = 0; i < nums.size(); i++)
//     {
//       if (nums[i] != i)
//       {
//         return i;
//       }
//     }
//     return nums.size();
//   }
// };