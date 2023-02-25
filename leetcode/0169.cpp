// https://leetcode.com/problems/majority-element/

// Moore's Voting Algorithm
class Solution
{
public:
  int majorityElement(vector<int> &nums)
  {
    int num = -1;
    int count = 0;

    for (int i = 0; i < nums.size(); i++)
    {
      if (num == nums[i])
      {
        count++;
      }
      else if (count == 0)
      {
        num = nums[i];
        count = 1;
      }
      else
      {
        count--;
      }
    }

    return num;
  }
};

// class Solution
// {
// public:
//   int majorityElement(vector<int> &nums)
//   {
//     unordered_map<int, int> map;

//     if (nums.size() == 1)
//     {
//       return nums[0];
//     }

//     for (int i = 0; i < nums.size(); i++)
//     {
//       if (map.find(nums[i]) == map.end())
//       {
//         map[nums[i]] = 1;
//       }
//       else
//       {
//         map[nums[i]]++;
//         if (map[nums[i]] > nums.size() / 2)
//         {
//           return nums[i];
//         }
//       }
//     }

//     return -1;
//   }
// };