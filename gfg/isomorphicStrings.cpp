// https://practice.geeksforgeeks.org/problems/isomorphic-strings-1587115620/1

class Solution
{
public:
  // Function to check if two strings are isomorphic.
  bool areIsomorphic(string s, string t)
  {
    if (s.length() != t.length())
    {
      return false;
    }

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