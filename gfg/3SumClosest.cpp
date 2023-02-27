// https://practice.geeksforgeeks.org/problems/3-sum-closest/1

class Solution
{
public:
  int closest3Sum(int a[], int n, int x)
  {
    sort(a, a + n);

    int diff = INT_MAX;

    int res;

    for (int i = 0; i < n - 2; i++)
    {

      int j = i + 1, k = n - 1;

      while (j < k)
      {

        int sum = (a[i] + a[j] + a[k]);

        if (diff > abs(x - sum))
        {

          diff = abs(x - sum);

          res = sum;
        }

        if (sum > x)
        {

          k--;
        }

        else if (sum < x)
        {

          j++;
        }

        else
        {

          return x;
        }
      }
    }

    return res;
  }
};