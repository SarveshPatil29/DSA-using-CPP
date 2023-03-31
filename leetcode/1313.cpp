// https://leetcode.com/problems/decompress-run-length-encoded-list/

class Solution
{
public:
  vector<int> decompressRLElist(vector<int> &nums)
  {
    vector<int> decompressed;
    for (int i = 0; i < nums.size(); i += 2)
    {
      int freq = nums[i];
      int val = nums[i + 1];

      while (freq)
      {
        decompressed.push_back(val);
        freq--;
      }
    }

    return decompressed;
  }
};