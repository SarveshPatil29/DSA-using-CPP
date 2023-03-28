// https://leetcode.com/problems/determine-color-of-a-chessboard-square

class Solution
{
public:
  bool squareIsWhite(string coordinates)
  {
    int num1 = coordinates[0] - 'a' + 1;
    int num2 = (int)coordinates[1];

    if ((num1 + num2) % 2 == 0)
    {
      return false;
    }
    else
    {
      return true;
    }
  }
};