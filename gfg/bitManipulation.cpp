// https://practice.geeksforgeeks.org/problems/bit-manipulation-1666686020/1

class Solution
{
public:
  void bitManipulation(int num, int i)
  {
    int mask = 1 << i - 1;
    if (mask & num)
    {
      cout << "1 ";
    }
    else
    {
      cout << "0 ";
    }

    int set = num | mask;
    int clear = num & (~mask);

    cout << set << " ";
    cout << clear << " ";
  }
};