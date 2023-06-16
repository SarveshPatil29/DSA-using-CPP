// https://practice.geeksforgeeks.org/problems/power-set4302/1

class Solution
{
public:
  void solve(string s, string &ds, vector<string> &ans, int ind)
  {
    if (ind == s.size())
    {
      if (ds.size())
        ans.push_back(ds);
      return;
    }

    ds.push_back(s[ind]);
    solve(s, ds, ans, ind + 1);

    ds.pop_back();
    solve(s, ds, ans, ind + 1);
  }

  vector<string> AllPossibleStrings(string s)
  {
    vector<string> ans;
    string ds = "";
    solve(s, ds, ans, 0);
    sort(ans.begin(), ans.end());
    return ans;
  }
};