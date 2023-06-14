// https://practice.geeksforgeeks.org/problems/bit-difference-1587115620/1

class Solution
{
public:
  // Function to find number of bits needed to be flipped to convert A to B
  int countBitsFlip(int start, int goal)
  {

    int ans = 0;
    int temp = start ^ goal;

    while (temp)
    {
      if (temp & 1)
      {
        ans++;
      }
      temp = temp >> 1;
    }
    return ans;
  }
};