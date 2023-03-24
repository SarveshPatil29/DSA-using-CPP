// https://practice.geeksforgeeks.org/problems/reverse-bits-1611130171/1

class Solution
{
public:
  unsigned int reverseBits(unsigned int n)
  {
    vector<int> bits;

    while (n != 0)
    {
      bits.push_back(n % 2);
      n /= 2;
    }

    reverse(bits.begin(), bits.end());

    unsigned int ans = 0;
    int power = 0;

    for (int i = 0; i < bits.size(); i++)
    {
      ans += bits[i] * pow(2, power);
      power++;
    }

    return ans;
  }
};