// https://leetcode.com/problems/palindrome-number/

class Solution
{
public:
  bool isPalindrome(int x)
  {
    if (x < 0)
    {
      return false;
    }

    string num = "";
    while (x)
    {
      num.append(to_string(x % 10));
      x /= 10;
    }

    int i = 0;
    int j = num.length() - 1;

    while (i <= j)
    {
      if (num[i] == num[j])
      {
        i++;
        j--;
      }
      else
      {
        return false;
      }
    }

    return true;
  }
};