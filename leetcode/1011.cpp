// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/

class Solution
{
public:
  bool canShip(vector<int> &weights, int days, int mid)
  {
    int daysReq = 0;
    int temp = 0;

    for (int i = 0; i < weights.size(); i++)
    {
      if (weights[i] > mid)
      {
        return false;
      }

      if (temp + weights[i] <= mid)
      {
        temp += weights[i];
      }
      else
      {
        daysReq++;
        temp = weights[i];
      }
    }
    daysReq++;

    if (daysReq <= days)
    {
      return true;
    }
    return false;
  }

  int shipWithinDays(vector<int> &weights, int days)
  {
    int low = 0;
    int high = 1e9;
    int mid = (low + high) >> 1;

    while (low <= high)
    {
      if (canShip(weights, days, mid))
      {
        high = mid - 1;
      }
      else
      {
        low = mid + 1;
      }
      mid = (low + high) >> 1;
    }

    return mid + 1;
  }
};