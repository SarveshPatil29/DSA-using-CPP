// https://practice.geeksforgeeks.org/problems/odd-or-even3618/1

class Solution
{
public:
  string oddEven(int N)
  {
    if (N & 1)
    {
      return "odd";
    }
    return "even";
  }
};