// https://leetcode.com/problems/find-all-groups-of-farmland/

class Solution
{
public:
  void solve(vector<vector<int>> &land, int &rows, int &cols, int i, int j, vector<int> &temp)
  {
    if (i < 0 || j < 0 || i >= rows || j >= cols || land[i][j] == 0)
    {
      return;
    }

    temp[0] = min(i, temp[0]);
    temp[1] = min(j, temp[1]);
    temp[2] = max(i, temp[2]);
    temp[3] = max(j, temp[3]);

    land[i][j] = 0;
    solve(land, rows, cols, i + 1, j, temp);
    solve(land, rows, cols, i - 1, j, temp);
    solve(land, rows, cols, i, j + 1, temp);
    solve(land, rows, cols, i, j - 1, temp);
  }

  vector<vector<int>> findFarmland(vector<vector<int>> &land)
  {
    int rows = land.size();
    int cols = land[0].size();
    vector<vector<int>> ans;

    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < cols; j++)
      {
        if (land[i][j] == 1)
        {
          vector<int> temp{rows, cols, 0, 0};
          solve(land, rows, cols, i, j, temp);
          ans.push_back(temp);
        }
      }
    }

    return ans;
  }
};