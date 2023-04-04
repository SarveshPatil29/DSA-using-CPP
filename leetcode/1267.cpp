// https://leetcode.com/problems/count-servers-that-communicate/

class Solution
{
public:
  int countServers(vector<vector<int>> &grid)
  {
    vector<int> row(grid.size());
    vector<int> col(grid[0].size());
    int rows = grid.size();
    int cols = grid[0].size();

    for (int i = 0; i < rows; i++)
    {
      int count = 0;
      for (int j = 0; j < cols; j++)
      {
        if (grid[i][j] == 1)
        {
          count++;
        }
      }
      row[i] = count;
    }

    for (int i = 0; i < cols; i++)
    {
      int count = 0;
      for (int j = 0; j < rows; j++)
      {
        if (grid[j][i] == 1)
        {
          count++;
        }
      }
      col[i] = count;
    }

    int ans = 0;
    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < cols; j++)
      {
        if (grid[i][j] == 1)
        {
          if (row[i] > 1)
          {
            ans++;
          }
          else if (col[j] > 1)
          {
            ans++;
          }
        }
      }
    }

    return ans;
  }
};