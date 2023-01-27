class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int size = nums.size();
        int count = 0;
        for (int i = 0; i < size; i++)
        {
            if (nums[i] == 0)
            {
                count++;
            }
        }

        remove(nums.begin(), nums.end(), 0);

        int i = size - 1;
        while (count > 0)
        {
            nums[i] = 0;
            count--;
            i--;
        }
    }
};