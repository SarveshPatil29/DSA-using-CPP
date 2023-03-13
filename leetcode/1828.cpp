// https://leetcode.com/problems/queries-on-number-of-points-inside-a-circle/

class Solution
{
public:
  vector<int> countPoints(vector<vector<int>> &points, vector<vector<int>> &queries)
  {
    vector<int> ans;
    for (int i = 0; i < queries.size(); i++)
    {
      int count = 0;
      for (int j = 0; j < points.size(); j++)
      {
        int dist = pow((queries[i][0] - points[j][0]), 2) + pow((queries[i][1] - points[j][1]), 2);
        if (dist <= pow(queries[i][2], 2))
        {
          count++;
        }
      }
      ans.push_back(count);
    }
    return ans;
  }
};