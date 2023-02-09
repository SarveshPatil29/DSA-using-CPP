// https://practice.geeksforgeeks.org/problems/find-all-pairs-whose-sum-is-x5808/1

class Solution
{
public:
  vector<pair<int, int>> allPairs(int A[], int B[], int N, int M, int X)
  {
    vector<int> a;
    for (int i = 0; i < N; i++)
    {
      a.push_back(A[i]);
    }

    sort(a.begin(), a.end());

    unordered_map<int, int> map;
    vector<pair<int, int>> ans;

    for (int i = 0; i < M; i++)
    {
      if (map.find(B[i]) == map.end())
      {
        map[B[i]] = 1;
      }
      else
      {
        map[B[i]]++;
      }
    }

    for (int i = 0; i < N; i++)
    {
      int toFind = X - a[i];

      if (map.find(toFind) != map.end())
      {
        pair<int, int> temp;
        temp.first = a[i];
        temp.second = toFind;

        ans.push_back(temp);
      }
    }

    return ans;
  }
};