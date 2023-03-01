// https://leetcode.com/problems/isomorphic-strings/

class Solution
{
public:
  bool isIsomorphic(string s, string t)
  {
    unordered_map<char, char> map;
    unordered_map<char, bool> isPresent;

    for (int i = 0; i < s.length(); i++)
    {
      if (map.find(s[i]) != map.end())
      {
        if (t[i] == map[s[i]])
        {
          // good to go
        }
        else
        {
          return false;
        }
      }
      else
      {
        if (isPresent.find(t[i]) != isPresent.end())
        {
          return false;
        }
        else
        {
          map[s[i]] = t[i];
          isPresent[t[i]] = true;
        }
      }
    }

    return true;
  }
};