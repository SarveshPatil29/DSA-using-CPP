// https://leetcode.com/problems/widest-vertical-area-between-two-points-containing-no-points/

class Solution
{
public:
  int maxWidthOfVerticalArea(vector<vector<int>> &points)
  {
    int size = points.size();
    vector<int> x(size);

    for (int i = 0; i < size; i++)
    {
      x[i] = points[i][0];
    }

    sort(x.begin(), x.end());

    int ans = 0;
    for (int i = 0; i < size - 1; i++)
    {
      ans = max(ans, x[i + 1] - x[i]);
    }

    return ans;
  }
};