// https://leetcode.com/problems/letter-combinations-of-a-phone-number/

class Solution
{
public:
  void solve(string &digits, vector<string> &ans, string &temp, int ind, map<char, vector<char>> &mp)
  {
    if (ind == digits.size())
    {
      ans.push_back(temp);
      return;
    }

    for (int i = 0; i < mp[digits[ind]].size(); i++)
    {
      temp.push_back(mp[digits[ind]][i]);
      solve(digits, ans, temp, ind + 1, mp);
      temp.pop_back();
    }
  }

  vector<string> letterCombinations(string digits)
  {
    map<char, vector<char>> mp;
    mp['2'] = {'a', 'b', 'c'};
    mp['3'] = {'d', 'e', 'f'};
    mp['4'] = {'g', 'h', 'i'};
    mp['5'] = {'j', 'k', 'l'};
    mp['6'] = {'m', 'n', 'o'};
    mp['7'] = {'p', 'q', 'r', 's'};
    mp['8'] = {'t', 'u', 'v'};
    mp['9'] = {'w', 'x', 'y', 'z'};

    vector<string> ans;
    string temp = "";

    if (digits == "")
      return ans;

    solve(digits, ans, temp, 0, mp);

    return ans;
  }
};