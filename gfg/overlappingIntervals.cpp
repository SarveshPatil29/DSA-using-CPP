// https://practice.geeksforgeeks.org/problems/8a644e94faaa94968d8665ba9e0a80d1ae3e0a2d/1

class Solution
{
public:
  vector<vector<int>> overlappedInterval(vector<vector<int>> &intervals)
  {
    vector<vector<int>> mergedIntervals;

    if (intervals.size() == 0)
    {
      return mergedIntervals;
    }

    sort(intervals.begin(), intervals.end());
    vector<int> tempInterval = intervals[0];

    for (int i = 0; i < intervals.size(); i++)
    {
      if (intervals[i][0] <= tempInterval[1])
      {
        tempInterval[1] = max(tempInterval[1], intervals[i][1]);
      }
      else
      {
        mergedIntervals.push_back(tempInterval);
        tempInterval = intervals[i];
      }
    }
    mergedIntervals.push_back(tempInterval);

    return mergedIntervals;
  }
};