// https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1

class Solution
{
public:
  // Function to reverse words in a given string.
  string reverseWords(string s)
  {
    vector<string> vec;
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] != '.')
      {
        temp += s[i];
      }
      else
      {
        if (temp != "")
        {
          vec.push_back(temp);
        }

        temp = "";
      }
    }
    if (temp != "")
    {
      vec.push_back(temp);
    }
    reverse(vec.begin(), vec.end());

    s = "";
    for (int i = 0; i < vec.size(); i++)
    {
      s += vec[i];
      s += ".";
    }
    s.erase(s.end() - 1);

    return s;
  }
};