// https://practice.geeksforgeeks.org/problems/check-if-strings-are-rotations-of-each-other-or-not-1587115620/1

class Solution
{
public:
  // Function to check if two strings are rotations of each other or not.
  bool areRotations(string s, string goal)
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