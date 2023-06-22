// https://leetcode.com/problems/valid-parentheses/

// class Solution
// {
// public:
//   bool isValid(string s)
//   {
//     vector<char> v;
//     for (int i = 0; i < s.length(); i++)
//     {
//       if (s[i] == '(' || s[i] == '{' || s[i] == '[')
//       {
//         v.push_back(s[i]);
//       }
//       else if (s[i] == ')')
//       {
//         if (v.size() == 0)
//         {
//           return false;
//         }
//         if (v.back() == '(')
//         {
//           v.pop_back();
//         }
//         else
//         {
//           return false;
//         }
//       }
//       else if (s[i] == '}')
//       {
//         if (v.size() == 0)
//         {
//           return false;
//         }
//         if (v.back() == '{')
//         {
//           v.pop_back();
//         }
//         else
//         {
//           return false;
//         }
//       }
//       else if (s[i] == ']')
//       {
//         if (v.size() == 0)
//         {
//           return false;
//         }
//         if (v.back() == '[')
//         {
//           v.pop_back();
//         }
//         else
//         {
//           return false;
//         }
//       }
//     }
//     if (v.size() == 0)
//     {
//       return true;
//     }
//     return false;
//   }
// };

class Solution
{
public:
  bool isValid(string x)
  {
    stack<char> s;

    for (int i = 0; i < x.size(); i++)
    {
      if (x[i] == '(' || x[i] == '[' || x[i] == '{')
      {
        s.push(x[i]);
      }
      else
      {
        if (s.empty())
        {
          return false;
        }
        char top = s.top();
        s.pop();

        if (!(x[i] == ')' && top == '(' || x[i] == ']' && top == '[' || x[i] == '}' && top == '{'))
        {
          return false;
        }
      }
    }

    if (s.empty())
    {
      return true;
    }
    return false;
  }
};