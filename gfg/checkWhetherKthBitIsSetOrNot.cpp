// https://practice.geeksforgeeks.org/problems/check-whether-k-th-bit-is-set-or-not-1587115620/1

class Solution
{
public:
  // Function to check if Kth bit is set or not.
  bool checkKthBit(int n, int k)
  {
    int mask = 1 << k;
    if (n & mask)
    {
      return true;
    }
    return false;
  }
};