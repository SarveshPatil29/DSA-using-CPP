// https://practice.geeksforgeeks.org/problems/ceil-the-floor2802/1

pair<int, int> getFloorAndCeil(int arr[], int n, int x)
{
  pair<int, int> temp1;
  temp1.first = INT_MIN;
  temp1.second = -1;

  pair<int, int> temp2;
  temp2.first = INT_MAX;
  temp2.second = -1;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] - x <= 0 && arr[i] - x > temp1.first)
    {
      temp1.first = arr[i] - x;
      temp1.second = arr[i];
    }

    if (arr[i] - x >= 0 && arr[i] - x < temp2.first)
    {
      temp2.first = arr[i] - x;
      temp2.second = arr[i];
    }
  }

  pair<int, int> ans;
  ans.first = temp1.second;
  ans.second = temp2.second;

  return ans;
}