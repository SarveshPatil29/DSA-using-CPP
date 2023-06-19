// https://practice.geeksforgeeks.org/problems/sieve-of-eratosthenes5242/1

class Solution
{
public:
  vector<int> sieveOfEratosthenes(int N)
  {
    vector<int> arr(N + 1);
    for (int i = 0; i <= N; i++)
    {
      arr[i] = i;
    }

    for (int i = 2; i * i < N; i++)
    {
      for (int j = i * i; j <= N; j += i)
      {
        if (arr[j] != -1)
        {
          arr[j] = -1;
        }
      }
    }

    vector<int> ans;
    for (int i = 2; i < arr.size(); i++)
    {
      if (arr[i] != -1)
      {
        ans.push_back(i);
      }
    }

    return ans;
  }
};