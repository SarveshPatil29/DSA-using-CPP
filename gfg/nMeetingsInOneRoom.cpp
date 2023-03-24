// https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1

class Solution
{
public:
  // Function to find the maximum number of meetings that can
  // be performed in a meeting room.
  int maxMeetings(int start[], int end[], int n)
  {

    vector<vector<int>> ss;
    for (int i = 0; i < n; i++)
    {
      vector<int> temp = {end[i], start[i]};
      ss.push_back(temp);
    }
    sort(ss.begin(), ss.end());

    int s = ss[0][1];
    int e = ss[0][0];
    int ans = 1;
    for (int i = 1; i < n; i++)
    {
      if (ss[i][1] > e)
      {
        ans++;
        s = ss[i][1];
        e = ss[i][0];
      }
    }
    return ans;
  }
};