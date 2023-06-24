// https://practice.geeksforgeeks.org/problems/get-minimum-element-from-stack/1

/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution
{
  int minEle;
  stack<int> s;

public:
  /*returns min element from stack*/
  int getMin()
  {

    // Write your code here
    if (s.empty())
      return -1;
    return minEle;
  }

  /*returns poped element from stack*/
  int pop()
  {

    // Write your code here
    if (s.empty())
      return -1;
    int y = s.top();
    s.pop();
    int x;
    if (y < 0)
    {
      x = minEle;
      minEle = minEle - y;
    }
    else
    {
      x = minEle + y;
    }
    return x;
  }

  /*push element x into the stack*/
  void push(int x)
  {

    // Write your code here
    if (s.empty())
    {
      minEle = x;
      s.push(0);
    }
    else
    {
      s.push(x - minEle);
      minEle = min(minEle, x);
    }
  }
};