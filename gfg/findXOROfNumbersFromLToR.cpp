// https://practice.geeksforgeeks.org/problems/find-xor-of-numbers-from-l-to-r/1

class Solution
{
public:
  int xorVal(int a)
  {
    if (a % 4 == 0)
    {
      return a;
    }
    else if (a % 4 == 1)
    {
      return 1;
    }
    else if (a % 4 == 2)
    {
      return a + 1;
    }
    else
    {
      return 0;
    }
  }

  int findXOR(int l, int r)
  {
    return (xorVal(l - 1) ^ xorVal(r));
  }
};