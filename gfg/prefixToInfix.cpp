// https://practice.geeksforgeeks.org/problems/prefix-to-infix-conversion/1

class Solution
{
public:
  string preToInfix(string s)
  {
    reverse(s.begin(), s.end());
    stack<string> st;

    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^')
      {
        string op1 = st.top();
        st.pop();
        string op2 = st.top();
        st.pop();

        st.push("(" + op1 + s[i] + op2 + ")");
      }
      else
      {
        string str = "";
        str += s[i];
        st.push(str);
      }
    }

    return st.top();
  }
};