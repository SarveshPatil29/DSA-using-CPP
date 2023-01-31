// https://leetcode.com/problems/length-of-last-word/

class Solution
{
public:
  int lengthOfLastWord(string s)
  {
    int i = s.length() - 1;
    while (s[i] == ' ')
    {
      i--;
    }

    int count = 0;
    while (s[i] != ' ')
    {
      count++;
      if (i > 0)
      {
        i--;
      }
      else
      {
        break;
      }
    }

    return count;
  }
};