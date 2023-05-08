// https://leetcode.com/problems/matrix-diagonal-sum/

class Solution
{
public:
  int diagonalSum(vector<vector<int>> &mat)
  {
    int ans = 0;
    int size = mat.size();

    for (int i = 0; i < size; i++)
    {
      if (i != size - i - 1)
      {
        ans += mat[i][i] + mat[i][size - i - 1];
      }
      else
      {
        ans += mat[i][i];
      }
    }
    return ans;
  }
};