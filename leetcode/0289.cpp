// https://leetcode.com/problems/game-of-life/

class Solution
{
public:
  void gameOfLife(vector<vector<int>> &board)
  {
    vector<vector<int>> ans(board);
    int rows = board.size();
    int cols = board[0].size();

    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < cols; j++)
      {
        int ones = 0;
        int zeroes = 0;

        if (i - 1 >= 0)
        {
          if (board[i - 1][j] == 1)
          {
            ones++;
          }
          else
          {
            zeroes++;
          }
        }

        if (i + 1 < rows)
        {
          if (board[i + 1][j] == 1)
          {
            ones++;
          }
          else
          {
            zeroes++;
          }
        }

        if (j - 1 >= 0)
        {
          if (board[i][j - 1] == 1)
          {
            ones++;
          }
          else
          {
            zeroes++;
          }
        }

        if (j + 1 < cols)
        {
          if (board[i][j + 1] == 1)
          {
            ones++;
          }
          else
          {
            zeroes++;
          }
        }

        if (i - 1 >= 0 && j - 1 >= 0)
        {
          if (board[i - 1][j - 1] == 1)
          {
            ones++;
          }
          else
          {
            zeroes++;
          }
        }

        if (i + 1 < rows && j + 1 < cols)
        {
          if (board[i + 1][j + 1] == 1)
          {
            ones++;
          }
          else
          {
            zeroes++;
          }
        }

        if (i + 1 < rows && j - 1 >= 0)
        {
          if (board[i + 1][j - 1] == 1)
          {
            ones++;
          }
          else
          {
            zeroes++;
          }
        }

        if (i - 1 >= 0 && j + 1 < cols)
        {
          if (board[i - 1][j + 1] == 1)
          {
            ones++;
          }
          else
          {
            zeroes++;
          }
        }

        if (board[i][j] == 1)
        {
          if (ones < 2)
          {
            ans[i][j] = 0;
          }
          else if (ones == 2 || ones == 3)
          {
            // will live
          }
          else if (ones > 3)
          {
            ans[i][j] = 0;
          }
        }
        else
        {
          if (ones == 3)
          {
            ans[i][j] = 1;
          }
        }
      }
    }

    board = ans;
  }
};