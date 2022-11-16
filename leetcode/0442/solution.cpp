class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int i = 0;

        vector<int> ans;
        while ((i + 1) < nums.size())
        {
            int count = 1;
            if (nums[i] == nums[i + 1])
            {
                count++;
                ans.push_back(nums[i]);
            }
            i += count;
        }
        return ans;
    }
};