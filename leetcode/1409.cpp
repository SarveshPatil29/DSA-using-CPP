// https://leetcode.com/problems/queries-on-a-permutation-with-key/

class Solution
{
public:
  vector<int> processQueries(vector<int> &queries, int m)
  {
    vector<int> P(m);
    for (int i = 0; i < m; i++)
    {
      P[i] = i + 1;
    }

    int size = queries.size();
    vector<int> ans(size);
    for (int i = 0; i < size; i++)
    {
      for (int j = 0; j < m; j++)
      {
        if (queries[i] == P[j])
        {
          ans[i] = j;
          P.erase(P.begin() + j);
          P.insert(P.begin(), queries[i]);
        }
      }
    }

    return ans;
  }
};