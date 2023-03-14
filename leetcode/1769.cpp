// https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/

class Solution
{
public:
  vector<int> minOperations(string boxes)
  {
    int n = boxes.size();
    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
      int count = 0;
      for (int j = 0; j < n; j++)
      {
        if (j != i && boxes[j] == '1')
        {
          count += abs(j - i);
        }
      }
      ans[i] = count;
    }
    return ans;
  }
};