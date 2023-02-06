// https://practice.geeksforgeeks.org/problems/largest-element-in-array4009/

class Solution
{
public:
  int largest(vector<int> &arr, int n)
  {
    int maximum = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
      maximum = max(maximum, arr[i]);
    }

    return maximum;
  }
};