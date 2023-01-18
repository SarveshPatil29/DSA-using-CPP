// https://leetcode.com/problems/string-compression

class Solution
{
public:
  int compress(vector<char> &chars)
  {
    int i = 0;
    int ansIndex = 0;

    while (i < chars.size())
    {
      int j = i + 1;
      while (j < chars.size() && chars[i] == chars[j])
      {
        j++;
      }

      int count = j - i;
      chars[ansIndex] = chars[i];
      ansIndex++;

      if (count > 1)
      {
        string countStr = to_string(count);
        for (char ch : countStr)
        {
          chars[ansIndex] = ch;
          ansIndex++;
        }
      }

      i = j;
    }

    return ansIndex;
  }
};