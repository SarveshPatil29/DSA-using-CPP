// https://leetcode.com/problems/n-queens/

class Solution
{
public:
  bool isSafe(int row, int col, vector<string> &board, int n)
  {
    int rowCopy = row;
    int colCopy = col;

    while (row >= 0 && col >= 0)
    {
      if (board[row][col] == 'Q')
      {
        return false;
      }
      row--;
      col--;
    }

    row = rowCopy;
    col = colCopy;

    while (col >= 0)
    {
      if (board[row][col] == 'Q')
      {
        return false;
      }
      col--;
    }

    row = rowCopy;
    col = colCopy;

    while (row < n && col >= 0)
    {
      if (board[row][col] == 'Q')
      {
        return false;
      }
      row++;
      col--;
    }

    return true;
  }

  void solve(int n, vector<vector<string>> &ans, int col, vector<string> &board)
  {
    if (col == n)
    {
      ans.push_back(board);
      return;
    }

    for (int i = 0; i < n; i++)
    {
      if (isSafe(i, col, board, n))
      {
        board[i][col] = 'Q';
        solve(n, ans, col + 1, board);
        board[i][col] = '.';
      }
    }
  }

  vector<vector<string>> solveNQueens(int n)
  {
    vector<vector<string>> ans;
    vector<string> board(n);
    string s(n, '.');

    for (int i = 0; i < n; i++)
    {
      board[i] = s;
    }

    solve(n, ans, 0, board);

    return ans;
  }
};