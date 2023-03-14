// https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/

class Solution
{
public:
  int mostWordsFound(vector<string> &sentences)
  {
    int ans = 0;

    for (int i = 0; i < sentences.size(); i++)
    {
      int totalWords = 0;
      for (int j = 0; j < sentences[i].length(); j++)
      {
        if (sentences[i][j] == ' ')
        {
          totalWords++;
        }
      }
      totalWords++;

      ans = max(ans, totalWords);
    }

    return ans;
  }
};