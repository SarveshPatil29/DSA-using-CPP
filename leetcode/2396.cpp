// https://leetcode.com/problems/strictly-palindromic-number/

class Solution
{
public:
  bool isStrictlyPalindromic(int n)
  {
    for (int i = 2; i <= n - 2; i++)
    {
      string num = "";
      int number = n;

      while (number)
      {
        num.append(to_string(number % i));
        number /= i;
      }

      int low = 0;
      int high = num.size() - 1;

      while (low < high)
      {
        if (num[low] != num[high])
        {
          return false;
        }
        else
        {
          low++;
          high--;
        }
      }
    }

    return false;
  }
};