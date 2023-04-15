// https://leetcode.com/problems/check-whether-two-strings-are-almost-equivalent/

class Solution
{
public:
  bool checkAlmostEquivalent(string word1, string word2)
  {
    unordered_map<char, int> map;

    for (int j = 0; j < word1.length(); j++)
    {
      map[word1[j]]++;
    }

    for (int j = 0; j < word2.length(); j++)
    {
      map[word2[j]]--;
    }

    for (auto item : map)
    {
      if (abs(item.second) > 3)
      {
        return false;
      }
    }

    return true;
  }
};