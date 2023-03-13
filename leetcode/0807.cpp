// https://leetcode.com/problems/max-increase-to-keep-city-skyline/

class Solution
{
public:
  int maxIncreaseKeepingSkyline(vector<vector<int>> &grid)
  {
    int ans = 0;
    vector<int> maxInRow;
    vector<int> maxInCol(grid.size(), 0);

    for (int i = 0; i < grid.size(); i++)
    {
      int maxRow = 0;
      for (int j = 0; j < grid[0].size(); j++)
      {
        maxRow = max(grid[i][j], maxRow);
        maxInCol[j] = max(grid[i][j], maxInCol[j]);
      }
      maxInRow.push_back(maxRow);
    }

    for (int i = 0; i < grid.size(); i++)
    {
      for (int j = 0; j < grid[0].size(); j++)
      {
        ans += min(maxInRow[i], maxInCol[j]) - grid[i][j];
      }
    }

    return ans;
  }
};