// https://leetcode.com/problems/maximum-number-of-events-that-can-be-attended/

class Solution
{
public:
  static bool cmp(vector<int> &a, vector<int> &b)
  {
    if (a[1] < b[1])
    {
      return true;
    }
    if (a[1] == b[1] && a[0] < b[0])
    {
      return true;
    }
    return false;
  }

  int maxEvents(vector<vector<int>> &events)
  {
    sort(events.begin(), events.end(), cmp);

    set<int> mySet;
    for (int i = 1; i <= 1e5; i++)
    {
      mySet.insert(i);
    }

    int ans = 0;
    for (int i = 0; i < events.size(); i++)
    {
      int start = events[i][0];
      int end = events[i][1];

      auto nearestDayIt = mySet.lower_bound(start);
      if (nearestDayIt == mySet.end() || *nearestDayIt > end)
      {
        continue;
      }
      else
      {
        ans++;
        mySet.erase(nearestDayIt);
      }
    }

    return ans;
  }
};