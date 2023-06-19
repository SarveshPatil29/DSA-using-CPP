// https://practice.geeksforgeeks.org/problems/all-divisors-of-a-number/1

class Solution
{
public:
  void print_divisors(int n)
  {
    vector<int> temp;
    for (int i = 1; i * i <= n; i++)
    {
      if (n % i == 0)
      {
        std::cout << i << " ";
        if (i * i != n)
        {
          temp.push_back(n / i);
        }
      }
    }

    for (int i = temp.size() - 1; i >= 0; i--)
    {
      std::cout << temp[i] << " ";
    }
  }
};