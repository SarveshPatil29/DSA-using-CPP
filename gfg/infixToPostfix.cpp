// https://practice.geeksforgeeks.org/problems/infix-to-postfix-1587115620/1

class Solution
{
public:
  int precedence(char ch)
  {
    if (ch == '^')
      return 3;
    else if (ch == '/' || ch == '*')
      return 2;
    else if (ch == '+' || ch == '-')
      return 1;
    else
      return -1;
  }

  // Function to convert an infix expression to a postfix expression.
  string infixToPostfix(string s)
  {
    stack<char> st;
    string ans = "";

    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] == '(')
      {
        st.push(s[i]);
      }
      else if (s[i] == ')')
      {
        while (st.top() != '(')
        {
          ans.push_back(st.top());
          st.pop();
        }
        st.pop();
      }
      else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^')
      {
        if (st.empty())
        {
          st.push(s[i]);
        }
        else
        {
          if (precedence(s[i]) > precedence(st.top()))
          {
            st.push(s[i]);
          }
          else
          {
            while (!st.empty() && precedence(s[i]) <= precedence(st.top()))
            {
              ans.push_back(st.top());
              st.pop();
            }
            st.push(s[i]);
          }
        }
      }
      else
      {
        ans.push_back(s[i]);
      }
    }

    while (!st.empty())
    {
      ans.push_back(st.top());
      st.pop();
    }

    return ans;
  }
};