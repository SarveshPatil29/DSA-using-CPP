// https://leetcode.com/problems/3sum-closest/

class Solution
{
public:
  int threeSumClosest(vector<int> &nums, int target)
  {
    sort(nums.begin(), nums.end());
    int closest = INT_MAX;
    int closestDist = INT_MAX;

    for (int i = 0; i < nums.size() - 2; i++)
    {
      int low = i + 1;
      int high = nums.size() - 1;
      int dist = 0;
      while (low < high)
      {
        int sum = nums[i] + nums[low] + nums[high];
        int dist = abs(target - sum);
        if (dist < closestDist)
        {
          closest = sum;
          closestDist = dist;
        }

        if (sum < target)
        {
          low++;
        }
        else
        {
          high--;
        }
      }
    }

    return closest;
  }
};