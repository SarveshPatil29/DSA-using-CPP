// https://practice.geeksforgeeks.org/problems/capacity-to-ship-packages-within-d-days/1

class Solution
{
public:
  bool canShip(int weights[], int N, int days, int mid)
  {
    int daysReq = 0;
    int temp = 0;

    for (int i = 0; i < N; i++)
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

  int leastWeightCapacity(int weights[], int N, int days)
  {
    int low = 0;
    int high = 1e9;
    int mid = (low + high) >> 1;

    while (low <= high)
    {
      if (canShip(weights, N, days, mid))
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