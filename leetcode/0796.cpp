// https://leetcode.com/problems/rotate-string/

class Solution
{
public:
  bool rotateString(string s, string goal)
  {
    int length = s.length();
    for (int i = 0; i < length; i++)
    {
      char temp = s[0];
      s.erase(s.begin());
      s.push_back(temp);

      if (s == goal)
      {
        return true;
      }
    }
    return false;
  }
};