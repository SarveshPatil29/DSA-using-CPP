// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

class Solution
{
public:
  void sort012(int a[], int n)
  {
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    for (int i = 0; i < n; i++)
    {
      if (a[i] == 0)
      {
        zeroCount++;
      }
      else if (a[i] == 1)
      {
        oneCount++;
      }
      else
      {
        twoCount++;
      }
    }

    int i = 0;
    while (i < zeroCount)
    {
      a[i] = 0;
      i++;
    }

    while (i < zeroCount + oneCount)
    {
      a[i] = 1;
      i++;
    }

    while (i < n)
    {
      a[i] = 2;
      i++;
    }
  }
};