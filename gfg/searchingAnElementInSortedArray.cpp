// https://practice.geeksforgeeks.org/problems/who-will-win-1587115621/1

class Solution
{
public:
  // Function to find element in sorted array
  // arr: input array
  // N: size of array
  // K: element to be searche
  int searchInSorted(int arr[], int N, int K)
  {

    int s = 0;
    int e = N - 1;
    int m = s + (e - s) / 2;

    while (s <= e)
    {
      if (arr[m] == K)
      {
        return 1;
      }
      else if (arr[m] < K)
      {
        s = m + 1;
      }
      else
      {
        e = m - 1;
      }

      m = s + (e - s) / 2;
    }
    return -1;
  }
};