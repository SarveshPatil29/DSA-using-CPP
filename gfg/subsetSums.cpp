// https://practice.geeksforgeeks.org/problems/subset-sums2234/1

class Solution
{
public:
  void findSubsetSums(vector<int> &ans, vector<int> &arr, int index, int sum)
  {
    if (index == arr.size())
    {
      ans.push_back(sum);
      return;
    }

    findSubsetSums(ans, arr, index + 1, sum + arr[index]);

    findSubsetSums(ans, arr, index + 1, sum);
  }

  vector<int> subsetSums(vector<int> arr, int N)
  {
    vector<int> ans;
    findSubsetSums(ans, arr, 0, 0);
    return ans;
  }
};