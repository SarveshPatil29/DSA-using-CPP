// https://leetcode.com/problems/happy-number/

class Solution
{
public:
  bool isHappy(int n)
  {
    set<int> seen;

    while (n != 1 && !seen.count(n))
    {
      seen.insert(n);

      int sum = 0;

      while (n)
      {
        sum += pow(n % 10, 2);
        n /= 10;
      }

      n = sum;
    }

    return n == 1;
  }
};