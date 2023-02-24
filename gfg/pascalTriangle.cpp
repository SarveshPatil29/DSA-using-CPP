// https://practice.geeksforgeeks.org/problems/pascal-triangle0652/1

// #define ll long long
class Solution
{
public:
  vector<ll> nthRowOfPascalTriangle(int n)
  {
    vector<vector<ll>> ans;

    for (int i = 0; i < n; i++)
    {
      vector<ll> temp(i + 1, 0);
      temp[0] = 1;
      temp[i] = 1;

      if (i > 1)
      {
        for (int j = 1; j < temp.size() - 1; j++)
        {
          temp[j] = (ans[i - 1][j] + ans[i - 1][j - 1]) % 1000000007;
        }
      }

      ans.push_back(temp);
    }

    return ans[n - 1];
  }
};