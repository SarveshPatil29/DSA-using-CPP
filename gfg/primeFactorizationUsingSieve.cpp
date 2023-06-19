// https://practice.geeksforgeeks.org/problems/prime-factorization-using-sieve/1

class Solution
{
public:
  void sieve() {}

  vector<int> findPrimeFactors(int N)
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

    int temp = N;
    vector<int> ans;
    for (int i = 2; i * i <= temp; i++)
    {
      if (arr[i] != -1 && N % i == 0)
      {
        while (N % i == 0)
        {
          ans.push_back(i);
          N = N / i;
        }
      }
    }

    if (N > 1)
      ans.push_back(N);
    return ans;
  }
};