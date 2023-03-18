// https://leetcode.com/problems/string-to-integer-atoi/

class Solution
{
public:
  int myAtoi(string s)
  {
    long num = 0;
    bool neg = false;
    int i = 0, max = INT_MAX, min = INT_MIN;
    // remove whitespaces
    for (; i < s.length() && s[i] == ' '; i++)
      ;
    // check + or - sign is given or not
    // if it then store
    if (i < s.length() && (s[i] == '-' || s[i] == '+'))
    {
      neg = s[i] == '-' ? true : false;
      i++;
    }
    // calculate number
    for (; i < s.length(); i++)
    {
      char ch = s[i];
      // check current element is digit or not
      if (ch - '0' >= 0 && ch - '0' <= 9)
      {
        num = num * 10 + (ch - '0');
        // till yet calculated number is bigger/lesser then max/min or not
        // if it return max/min
        if (num > max)
        {
          return neg ? min : max;
        }
      }
      else
      {
        break;
      }
    }
    // convert int32 and apply sign
    return neg ? -(int)num : (int)num;
  }
};