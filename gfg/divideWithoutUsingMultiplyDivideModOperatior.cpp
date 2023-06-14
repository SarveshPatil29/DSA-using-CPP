// https://practice.geeksforgeeks.org/problems/division-without-using-multiplication-division-and-mod-operator/0

class Solution
{
public:
  long long divide(long long dividend, long long divisor)
  {
    int sign = 1;

    if ((dividend < 0 && divisor >= 0) || (dividend >= 0 && divisor < 0))
    {
      sign = -1;
    }

    dividend = abs(dividend);
    divisor = abs(divisor);

    int res = 0;
    while (dividend - divisor >= 0)
    {
      int x = 0;
      while (dividend - (divisor << 1 << x) >= 0)
      {
        x++;
      }

      res += 1 << x;
      dividend -= divisor << x;
    }

    return res * sign;
  }
};