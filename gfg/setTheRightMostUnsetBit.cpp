// https://practice.geeksforgeeks.org/problems/set-the-rightmost-unset-bit4436/1

class Solution
{
public:
  int setBit(int N)
  {
    int temp = N;
    int mask = 1;
    int count = 0;
    while (temp & mask)
    {
      if (mask << 1 <= temp)
        mask = mask << 1;
      else
      {
        break;
      }
    }

    N = N | mask;
    return N;
  }
};