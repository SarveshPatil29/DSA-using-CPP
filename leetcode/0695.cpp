// https://leetcode.com/problems/max-area-of-island/

class Solution
{
public:
  void makeTwos(vector<vector<int>> &grid, int rows, int cols, int i, int j, int &area)
  {
    if (i < 0 || j < 0 || i >= rows || j >= cols || grid[i][j] == 0 || grid[i][j] == 2)
    {
      return;
    }

    grid[i][j] = 2;
    area++;

    makeTwos(grid, rows, cols, i + 1, j, area);
    makeTwos(grid, rows, cols, i - 1, j, area);
    makeTwos(grid, rows, cols, i, j + 1, area);
    makeTwos(grid, rows, cols, i, j - 1, area);
  }

  int maxAreaOfIsland(vector<vector<int>> &grid)
  {
    int ans = 0;
    int rows = grid.size();
    int cols = grid[0].size();

    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < cols; j++)
      {
        if (grid[i][j] == 1)
        {
          int area = 0;
          makeTwos(grid, rows, cols, i, j, area);
          ans = max(area, ans);
        }
      }
    }

    return ans;
  }
};