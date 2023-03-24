// https://leetcode.com/problems/maximum-units-on-a-truck/

class Solution
{
public:
  static bool compareInterval(vector<int> i1, vector<int> i2)
  {
    return (i1[1] > i2[1]);
  }

  int maximumUnits(vector<vector<int>> &boxTypes, int truckSize)
  {
    sort(boxTypes.begin(), boxTypes.end(), compareInterval);

    int noOfBox = 0;
    int ans = 0;

    for (int i = 0; i < boxTypes.size(); i++)
    {
      int boxes = boxTypes[i][0];
      int units = boxTypes[i][1];

      while (noOfBox < truckSize && boxes > 0)
      {
        ans += units;
        noOfBox++;
        boxes--;
      }
    }

    return ans;
  }
};