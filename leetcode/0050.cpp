// https://leetcode.com/problems/powx-n/

// class Solution
// {
// public:
//   double powFunc(double x, int n)
//   {
//     if (n == 0)
//     {
//       return 1;
//     }

//     double temp = powFunc(x, n / 2);
//     if (n % 2 == 1)
//     {
//       return temp * temp * x;
//     }

//     return temp * temp;
//   }

//   double myPow(double x, int n)
//   {
//     if (n == INT_MAX)
//     {
//       if (x == 1)
//         return 1;
//       else
//       {
//         if (x == -1)
//           return -1;
//         else
//           return 0;
//       }
//     }
//     if (n == INT_MIN)
//     {
//       if (x == 1 || x == -1)
//         return 1;
//       else
//         return 0;
//     }
//     if (n >= 0)
//     {
//       return powFunc(x, n);
//     }
//     else
//     {
//       x = 1.0 / x;
//       n = abs(n);
//       return powFunc(x, n);
//     }
//   }
// };

class Solution
{
public:
  double myPow(double x, int n)
  {
    long nn = n;
    double ans = 1.0;
    if (n < 0)
    {
      nn = -1 * nn;
    }

    while (nn)
    {
      if (nn & 1 == 1)
      {
        ans = ans * x;
        nn--;
      }
      else
      {
        x = x * x;
        nn /= 2;
      }
    }

    if (n < 0)
    {
      ans = (double)1.0 / (double)ans;
    }

    return ans;
  }
};