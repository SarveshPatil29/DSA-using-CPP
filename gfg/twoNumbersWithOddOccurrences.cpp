// https://practice.geeksforgeeks.org/problems/two-numbers-with-odd-occurrences5846/1

class Solution
{
public:
  vector<long long int> twoOddNum(long long int Arr[], long long int N)
  {
    int temp = 0;
    for (int i = 0; i < N; i++)
    {
      temp ^= Arr[i];
    }

    int a = 0;
    for (int i = 0; i < N; i++)
    {
      if (Arr[i] & (temp & ~(temp - 1)))
        a ^= Arr[i];
    }

    int b = a ^ temp;
    if (a > b)
    {
      return {a, b};
    }
    return {b, a};
  }
};