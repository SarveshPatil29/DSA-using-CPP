// https://leetcode.com/problems/reconstruct-original-digits-from-english/

class Solution
{
public:
  string originalDigits(string s)
  {
    vector<int> letters(26, 0);
    for (int i = 0; i < s.length(); i++)
    {
      letters[s[i] - 'a']++;
    }

    vector<int> digits(10, 0);
    digits[0] = letters['z' - 'a'];
    digits[2] = letters['w' - 'a'];
    digits[4] = letters['u' - 'a'];
    digits[6] = letters['x' - 'a'];
    digits[8] = letters['g' - 'a'];

    digits[1] = letters['o' - 'a'] - digits[0] - digits[2] - digits[4];
    digits[3] = letters['h' - 'a'] - digits[8];
    digits[5] = letters['f' - 'a'] - digits[4];
    digits[7] = letters['s' - 'a'] - digits[6];
    digits[9] = letters['i' - 'a'] - digits[8] - digits[6] - digits[5];

    string ans = "";
    for (int i = 0; i < 10; i++)
    {
      if (digits[i] > 0)
      {
        for (int j = 0; j < digits[i]; j++)
        {
          ans.append(to_string(i));
        }
      }
    }

    return ans;
  }
};