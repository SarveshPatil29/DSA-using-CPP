// https://www.codingninjas.com/codestudio/problems/sum-of-two-arrays_893186

#include <bits/stdc++.h>
vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
  // Write your code here.
  int num1 = 0;
  for (int i = n - 1; i >= 0; i--)
  {
    num1 += a[i] * pow(10, n - i - 1);
  }

  int num2 = 0;
  for (int i = m - 1; i >= 0; i--)
  {
    num2 += b[i] * pow(10, m - i - 1);
  }

  int ans = num1 + num2;

  vector<int> ansArr;

  while (ans != 0)
  {
    ansArr.push_back(ans % 10);
    ans = ans / 10;
  }

  reverse(ansArr.begin(), ansArr.end());

  return ansArr;
}