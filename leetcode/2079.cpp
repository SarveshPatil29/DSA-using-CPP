// https://leetcode.com/problems/watering-plants/

class Solution
{
public:
  int wateringPlants(vector<int> &plants, int capacity)
  {
    int can = capacity;
    int i = 0;
    int size = plants.size();
    int ans = 0;

    while (i < size)
    {
      if (can >= plants[i])
      {
        ans++;
        can -= plants[i];
        i++;
      }
      else
      {
        ans += i;
        can = capacity;
        ans += i + 1;
        can -= plants[i];
        i++;
      }
    }

    return ans;
  }
};