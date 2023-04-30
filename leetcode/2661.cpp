// https://leetcode.com/problems/first-completely-painted-row-or-column/

class Solution
{
public:
  int firstCompleteIndex(vector<int> &arr, vector<vector<int>> &mat)
  {
    int size = arr.size();
    int rows = mat.size();
    int cols = mat[0].size();
    unordered_map<int, pair<int, int>> elem_pos;
    unordered_map<int, vector<int>> row;
    unordered_map<int, vector<int>> col;

    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < cols; j++)
      {
        elem_pos[mat[i][j]] = {i, j};
      }
    }

    for (int i = 0; i < size; i++)
    {
      int elem = arr[i];
      int x = elem_pos[elem].first;
      int y = elem_pos[elem].second;
      row[x].push_back(elem);
      col[y].push_back(elem);

      if (row[x].size() == cols || col[y].size() == rows)
      {
        return i;
      }
    }

    return -1;
  }
};