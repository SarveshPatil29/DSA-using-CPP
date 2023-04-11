// https://leetcode.com/problems/removing-stars-from-a-string/

class Solution
{
public:
  string removeStars(string s)
  {
    stack<int> closestElems;

    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] == '*')
      {
        s[i] = '#';
        s[closestElems.top()] = '#';
        closestElems.pop();
      }
      else if (s[i] != '#')
      {
        closestElems.push(i);
      }
    }

    s.erase(remove(s.begin(), s.end(), '#'), s.end());
    return s;
  }
};