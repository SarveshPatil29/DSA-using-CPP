// https://leetcode.com/problems/implement-queue-using-stacks/

// class MyQueue
// {
// public:
//   stack<int> s1;
//   stack<int> s2;

//   MyQueue()
//   {
//   }

//   void push(int x)
//   {
//     while (s1.size())
//     {
//       s2.push(s1.top());
//       s1.pop();
//     }

//     s1.push(x);

//     while (s2.size())
//     {
//       s1.push(s2.top());
//       s2.pop();
//     }
//   }

//   int pop()
//   {
//     int temp = s1.top();
//     s1.pop();
//     return temp;
//   }

//   int peek()
//   {
//     return s1.top();
//   }

//   bool empty()
//   {
//     return s1.size() ? false : true;
//   }
// };

// /**
//  * Your MyQueue object will be instantiated and called as such:
//  * MyQueue* obj = new MyQueue();
//  * obj->push(x);
//  * int param_2 = obj->pop();
//  * int param_3 = obj->peek();
//  * bool param_4 = obj->empty();
//  */

class MyQueue
{
public:
  stack<int> input;
  stack<int> output;

  MyQueue()
  {
  }

  void push(int x)
  {
    input.push(x);
  }

  int pop()
  {
    if (output.size() > 0)
    {
      int temp = output.top();
      output.pop();
      return temp;
    }
    else
    {
      while (input.size())
      {
        output.push(input.top());
        input.pop();
      }
      int temp = output.top();
      output.pop();
      return temp;
    }
  }

  int peek()
  {
    if (output.size() > 0)
    {
      return output.top();
    }
    else
    {
      while (input.size())
      {
        output.push(input.top());
        input.pop();
      }
      return output.top();
    }
  }

  bool empty()
  {
    return (input.size() > 0 || output.size() > 0) ? false : true;
  }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */