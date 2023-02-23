// https://practice.geeksforgeeks.org/problems/next-permutation5226/1

class Solution
{
public:
  vector<int> nextPermutation(int N, vector<int> arr)
  {
    int k, i;
    int n = arr.size();

    if (n <= 1)
    {
      return arr;
    }

    for (k = n - 2; k >= 0; k--)
    {
      if (arr[k] < arr[k + 1])
      {
        break;
      }
    }

    if (k < 0)
    {
      reverse(arr.begin(), arr.end());
    }
    else
    {
      for (i = n - 1; i > k; i--)
      {
        if (arr[i] > arr[k])
        {
          break;
        }
      }
      swap(arr[i], arr[k]);
      reverse(arr.begin() + k + 1, arr.end());
    }

    return arr;
  }
};