// https://leetcode.com/problems/spiral-matrix/

class Solution
{
public:
  vector<int> spiralOrder(vector<vector<int>> &matrix)
  {
    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = row * col;

    int startingRow = 0;
    int endingCol = col - 1;
    int endingRow = row - 1;
    int startingCol = 0;

    vector<int> ans;

    while (count < total)
    {
      // print first row
      for (int i = startingCol; i <= endingCol && count < total; i++)
      {
        ans.push_back(matrix[startingRow][i]);
        count++;
      }
      startingRow++;

      // print last col
      for (int i = startingRow; i <= endingRow && count < total; i++)
      {
        ans.push_back(matrix[i][endingCol]);
        count++;
      }
      endingCol--;

      // print last row
      for (int i = endingCol; i >= startingCol && count < total; i--)
      {
        ans.push_back(matrix[endingRow][i]);
        count++;
      }
      endingRow--;

      // print first col
      for (int i = endingRow; i >= startingRow && count < total; i--)
      {
        ans.push_back(matrix[i][startingCol]);
        count++;
      }
      startingCol++;
    }

    return ans;
  }
};