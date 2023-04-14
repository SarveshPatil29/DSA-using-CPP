// https://leetcode.com/problems/number-of-closed-islands/

class Solution
{
public:
  void makeTwos(vector<vector<int>> &grid, int rows, int cols, int i, int j, int &ans, bool &toCount)
  {
    if (i >= rows || j >= cols || i < 0 || j < 0 || grid[i][j] != 0)
    {
      return;
    }

    if (i == rows - 1 || j == cols - 1 || i == 0 || j == 0)
    {
      toCount = false;
    }

    grid[i][j] = 2;
    makeTwos(grid, rows, cols, i + 1, j, ans, toCount);
    makeTwos(grid, rows, cols, i - 1, j, ans, toCount);
    makeTwos(grid, rows, cols, i, j + 1, ans, toCount);
    makeTwos(grid, rows, cols, i, j - 1, ans, toCount);
  }

  int closedIsland(vector<vector<int>> &grid)
  {
    int ans = 0;
    int rows = grid.size();
    int cols = grid[0].size();

    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < cols; j++)
      {
        if (grid[i][j] == 0)
        {
          bool toCount = true;
          makeTwos(grid, rows, cols, i, j, ans, toCount);
          if (toCount)
          {
            ans++;
          }
        }
      }
    }

    return ans;
  }
};