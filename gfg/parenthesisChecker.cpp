// https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1

class Solution
{
public:
  // Function to check if brackets are balanced or not.
  bool ispar(string x)
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