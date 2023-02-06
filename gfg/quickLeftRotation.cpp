// https://practice.geeksforgeeks.org/problems/quick-left-rotation3806/1

class Solution
{
public:
  void leftRotate(int arr[], int k, int n)
  {
    int temp[n];

    for (int i = 0; i < n; i++)
    {
      if ((i - k) % n < 0)
      {
        temp[(i - k) % n + n] = arr[i];
      }
      else
      {
        temp[(i - k) % n] = arr[i];
      }
    }
    for (int i = 0; i < n; i++)
    {
      arr[i] = temp[i];
    }
  }
};