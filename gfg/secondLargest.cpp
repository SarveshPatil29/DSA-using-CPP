// https://practice.geeksforgeeks.org/problems/second-largest3735/1

class Solution
{
public:
  // Function returns the second
  // largest elements
  int print2largest(int arr[], int n)
  {
    int maximum = -1;
    int secondMax = -1;

    for (int i = 0; i < n; i++)
    {
      if (arr[i] > secondMax && arr[i] > maximum)
      {
        secondMax = maximum;
        maximum = arr[i];
      }
      else if (arr[i] > secondMax && arr[i] < maximum)
      {
        secondMax = arr[i];
      }
    }

    return secondMax;
  }
};