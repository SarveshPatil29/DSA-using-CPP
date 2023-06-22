// https://leetcode.com/problems/min-stack/

class MinStack
{
public:
  stack<pair<int, int>> s;
  int currMin = INT_MAX;

  MinStack()
  {
  }

  void push(int val)
  {
    currMin = min(val, currMin);
    s.push({val, currMin});
  }

  void pop()
  {
    s.pop();
    if (s.empty())
    {
      currMin = INT_MAX;
    }
    else
    {
      currMin = s.top().second;
    }
  }

  int top()
  {
    return s.top().first;
  }

  int getMin()
  {
    return s.top().second;
  }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */