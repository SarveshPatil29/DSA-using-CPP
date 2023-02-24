// https://practice.geeksforgeeks.org/problems/cd61add036272faa69c6814e34aa7007d5a25aa6/1

class Solution
{

public:
  int findK(vector<vector<int>> &a, int n, int m, int k)
  {
    int row = a.size();
    int col = a[0].size();

    int count = 0;
    int total = row * col;

    int rowStart = 0;
    int rowEnd = row - 1;
    int colStart = 0;
    int colEnd = col - 1;

    vector<int> ans;

    while (count < total)
    {
      for (int i = colStart; i <= colEnd && count < total; i++)
      {
        ans.push_back(a[rowStart][i]);
        count++;
      }
      rowStart++;

      for (int i = rowStart; i <= rowEnd && count < total; i++)
      {
        ans.push_back(a[i][colEnd]);
        count++;
      }
      colEnd--;

      for (int i = colEnd; i >= colStart && count < total; i--)
      {
        ans.push_back(a[rowEnd][i]);
        count++;
      }
      rowEnd--;

      for (int i = rowEnd; i >= rowStart && count < total; i--)
      {
        ans.push_back(a[i][colStart]);
        count++;
      }
      colStart++;
    }

    return ans[k - 1];
  }
};