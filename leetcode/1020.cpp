// https://leetcode.com/problems/number-of-enclaves/

class Solution
{
public:
  void makeTwos(vector<vector<int>> &grid, int rows, int cols, int i, int j, int &tempCount, bool &toCount)
  {
    if (i >= rows || j >= cols || i < 0 || j < 0 || grid[i][j] != 1)
    {
      return;
    }

    if (i == rows - 1 || j == cols - 1 || i == 0 || j == 0)
    {
      toCount = false;
    }

    grid[i][j] = 2;
    tempCount++;
    makeTwos(grid, rows, cols, i + 1, j, tempCount, toCount);
    makeTwos(grid, rows, cols, i - 1, j, tempCount, toCount);
    makeTwos(grid, rows, cols, i, j + 1, tempCount, toCount);
    makeTwos(grid, rows, cols, i, j - 1, tempCount, toCount);
  }

  int numEnclaves(vector<vector<int>> &grid)
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
          bool toCount = true;
          int tempCount = 0;
          makeTwos(grid, rows, cols, i, j, tempCount, toCount);
          if (toCount)
          {
            ans += tempCount;
          }
        }
      }
    }

    return ans;
  }
};