// https://leetcode.com/problems/non-overlapping-intervals/

class Solution
{
public:
  int eraseOverlapIntervals(vector<vector<int>> &intervals)
  {
    sort(intervals.begin(), intervals.end());
    int endOfInterval = 0;
    int ans = 0;

    for (int i = 1; i < intervals.size(); i++)
    {
      if (intervals[endOfInterval][1] > intervals[i][0])
      {
        if (intervals[endOfInterval][1] > intervals[i][1])
        {
          endOfInterval = i;
        }
        ans++;
      }
      else
      {
        endOfInterval = i;
      }
    }

    return ans;
  }
};