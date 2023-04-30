// https://leetcode.com/problems/maximum-number-of-fish-in-a-grid/

class Solution
{
public:
  void solve(vector<vector<int>> &grid, int &rows, int &cols, int i, int j, int &temp)
  {
    if (i < 0 || j < 0 || i >= rows || j >= cols || grid[i][j] == 0)
    {
      return;
    }

    temp += grid[i][j];
    grid[i][j] = 0;
    solve(grid, rows, cols, i + 1, j, temp);
    solve(grid, rows, cols, i - 1, j, temp);
    solve(grid, rows, cols, i, j + 1, temp);
    solve(grid, rows, cols, i, j - 1, temp);
  }

  int findMaxFish(vector<vector<int>> &grid)
  {
    int rows = grid.size();
    int cols = grid[0].size();
    int ans = 0;

    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < cols; j++)
      {
        if (grid[i][j] != 0)
        {
          int temp = 0;
          solve(grid, rows, cols, i, j, temp);
          ans = max(ans, temp);
        }
      }
    }

    return ans;
  }
};