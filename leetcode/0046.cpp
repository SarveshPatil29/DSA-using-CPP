// https://leetcode.com/problems/permutations/

// class Solution
// {
// public:
//   vector<vector<int>> permute(vector<int> &nums)
//   {
//     vector<vector<int>> result;
//     dfs(nums, 0, result);
//     return result;
//   }

// private:
//   void dfs(vector<int> &nums, int start, vector<vector<int>> &result)
//   {
//     if (start == nums.size())
//     {
//       result.push_back(nums);
//       return;
//     }
//     for (int i = start; i < nums.size(); i++)
//     {
//       swap(nums[i], nums[start]);
//       dfs(nums, start + 1, result);
//       swap(nums[i], nums[start]);
//     }
//   }
// };

// class Solution {
// public:
//     void solve(vector<int> &nums, vector<vector<int>> &ans, set<int> &mp, vector<int> &temp, int size) {
//         if(temp.size() == size) {
//             ans.push_back(temp);
//             return;
//         }

//         for(int i = 0; i<size; i++) {
//             if(!mp.count(nums[i])) {
//                 mp.insert(nums[i]);
//                 temp.push_back(nums[i]);
//                 solve(nums, ans, mp, temp, size);
//                 mp.erase(nums[i]);
//                 temp.pop_back();
//             }
//         }
//     }

//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<vector<int>> ans;
//         vector<int> temp;
//         set<int> mp;
//         solve(nums, ans, mp, temp, nums.size());
//         return ans;
//     }
// };

class Solution
{
public:
  void solve(vector<vector<int>> &ans, vector<int> &nums, int size, int ind)
  {
    if (ind >= size)
    {
      ans.push_back(nums);
      return;
    }

    for (int i = ind; i < size; i++)
    {
      swap(nums[i], nums[ind]);
      solve(ans, nums, size, ind + 1);
      swap(nums[i], nums[ind]);
    }
  }

  vector<vector<int>> permute(vector<int> &nums)
  {
    vector<vector<int>> ans;
    solve(ans, nums, nums.size(), 0);
    return ans;
  }
};