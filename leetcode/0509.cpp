// Fibonacci Number

class Solution
{
public:
  int fib(int n)
  {
    if (n == 0)
    {
      return 0;
    }
    if (n == 1)
    {
      return 1;
    }

    int secondPrev = 0;
    int prev = 1;

    for (int i = 2; i <= n; i++)
    {
      int temp = prev;
      prev = prev + secondPrev;
      secondPrev = temp;
    }

    return prev;
  }
};