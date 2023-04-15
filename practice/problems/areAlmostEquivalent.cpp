#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

void areAlmostEquivalent(vector<string> &s, vector<string> &t, int n)
{
  vector<string> ans(n, "");

  for (int i = 0; i < n; i++)
  {
    unordered_map<char, int> map;

    for (int j = 0; j < s[i].length(); j++)
    {
      map[s[i][j]]++;
    }

    for (int j = 0; j < t[i].length(); j++)
    {
      map[t[i][j]]--;
    }

    for (auto item : map)
    {
      if (abs(item.second) > 3)
      {
        ans[i] = "NO";
        break;
      }
    }

    if (ans[i] == "")
    {
      ans[i] = "YES";
    }
  }

  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
}

int main()
{
  int n = 0;
  cin >> n;

  vector<string> s(n, "");
  vector<string> t(n, "");

  for (int i = 0; i < n; i++)
  {
    cin >> s[i];
  }

  for (int i = 0; i < n; i++)
  {
    cin >> t[i];
  }

  areAlmostEquivalent(s, t, n);

  return 0;
}