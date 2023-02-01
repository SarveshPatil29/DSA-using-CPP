// https://leetcode.com/problems/excel-sheet-column-number/

class Solution
{
public:
  int titleToNumber(string columnTitle)
  {
    int size = columnTitle.length();
    int ans = 0;
    for (int i = 0; i < columnTitle.length(); i++)
    {
      ans += pow(26, size - 1) * (columnTitle[i] - 64);
      size--;
    }

    return ans;
  }
};