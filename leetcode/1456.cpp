// https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/

class Solution
{
public:
  int maxVowels(string s, int k)
  {
    set<char> st{'a', 'e', 'i', 'o', 'u'};
    int temp = 0;
    for (int i = 0; i < k; i++)
    {
      if (st.count(s[i]))
      {
        temp++;
      }
    }

    int size = s.size();
    int low = 0;
    int high = k - 1;
    int ans = temp;

    while (high < size)
    {
      if (st.count(s[low]))
      {
        temp--;
      }
      low++;
      high++;
      if (st.count(s[high]))
      {
        temp++;
      }

      ans = max(temp, ans);
    }

    return ans;
  }
};