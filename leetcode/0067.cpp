// https://leetcode.com/problems/add-binary/

class Solution
{
public:
  string addBinary(string a, string b)
  {
    string ans;

    int i = a.length() - 1;
    int j = b.length() - 1;

    int carry = 0;

    while (i >= 0 || j >= 0)
    {
      int sum = carry;

      if (i >= 0)
      {
        sum += a[i] - '0';
        i--;
      }

      if (j >= 0)
      {
        sum += b[j] - '0';
        j--;
      }

      if (sum <= 1)
      {
        ans += to_string(sum);
        carry = 0;
      }
      else if (sum == 2)
      {
        ans += to_string(0);
        carry = 1;
      }
      else if (sum == 3)
      {
        ans += to_string(1);
        carry = 1;
      }

      cout << ans << " ";
    }

    if (carry)
    {
      ans += to_string(1);
    }

    reverse(ans.begin(), ans.end());

    return ans;
  }
};