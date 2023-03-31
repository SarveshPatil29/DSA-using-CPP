// https://leetcode.com/problems/squares-of-a-sorted-array/

class Solution
{
public:
  vector<int> sortedSquares(vector<int> &nums)
  {
    int pos = 0;
    int neg = 0;
    int i;
    for (i = 0; i < nums.size(); i++)
    {
      if (nums[i] >= 0)
      {
        break;
      }
    }

    pos = i;
    neg = i - 1;
    vector<int> ans(nums.size(), 0);

    i = 0;
    while (pos < nums.size() && neg >= 0)
    {
      if (nums[pos] > (-1 * nums[neg]))
      {
        ans[i] = pow(nums[neg], 2);
        neg--;
      }
      else
      {
        ans[i] = pow(nums[pos], 2);
        pos++;
      }
      i++;
    }

    while (pos < nums.size())
    {
      ans[i] = pow(nums[pos], 2);
      pos++;
      i++;
    }

    while (neg >= 0)
    {
      ans[i] = pow(nums[neg], 2);
      neg--;
      i++;
    }

    return ans;
  }
};

// class Solution
// {
// public:
//   vector<int> sortedSquares(vector<int> &nums)
//   {
//     for (int i = 0; i < nums.size(); i++)
//     {
//       nums[i] *= nums[i];
//     }

//     sort(nums.begin(), nums.end());

//     return nums;
//   }
// };