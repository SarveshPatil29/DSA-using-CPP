// https://leetcode.com/problems/determine-the-winner-of-a-bowling-game/

class Solution
{
public:
  int isWinner(vector<int> &player1, vector<int> &player2)
  {
    int p1Score = 0;
    int p2Score = 0;

    int size = player1.size();
    int toDouble = 0;
    for (int i = 0; i < size; i++)
    {
      if (toDouble > 0)
      {
        p1Score += player1[i] * 2;
        toDouble--;
      }
      else
      {
        p1Score += player1[i];
      }

      if (player1[i] == 10)
      {
        toDouble = 2;
      }
    }

    toDouble = 0;
    for (int i = 0; i < size; i++)
    {
      if (toDouble > 0)
      {
        p2Score += player2[i] * 2;
        toDouble--;
      }
      else
      {
        p2Score += player2[i];
      }

      if (player2[i] == 10)
      {
        toDouble = 2;
      }
    }

    cout << p1Score << " " << p2Score << endl;

    if (p1Score > p2Score)
    {
      return 1;
    }
    else if (p2Score > p1Score)
    {
      return 2;
    }
    else
    {
      return 0;
    }
  }
};