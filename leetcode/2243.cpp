// https://leetcode.com/problems/calculate-digit-sum-of-a-string/

class Solution
{
public:
  string digitSum(string s, int k)
  {
    while (s.length() > k)
    {
      string temp = "";
      int count = 0;
      int sum = 0;
      for (int i = 0; i < s.length(); i++)
      {
        if (count < k)
        {
          sum += s[i] - '0';
          count++;
        }
        else
        {
          temp.append(to_string(sum));
          count = 0;
          sum = 0;
          sum += s[i] - '0';
          count++;
        }
      }
      temp.append(to_string(sum));
      s = temp;
    }

    return s;
  }
};