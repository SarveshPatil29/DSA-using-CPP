// https://leetcode.com/problems/implement-stack-using-queues/

// class MyStack
// {
// public:
//   queue<int> q1;
//   queue<int> q2;

//   MyStack()
//   {
//   }

//   void push(int x)
//   {
//     q2.push(x);
//     while (q1.size())
//     {
//       q2.push(q1.front());
//       q1.pop();
//     }
//     swap(q1, q2);
//   }

//   int pop()
//   {
//     int temp = q1.front();
//     q1.pop();
//     return temp;
//   }

//   int top()
//   {
//     return q1.front();
//   }

//   bool empty()
//   {
//     return q1.size() ? false : true;
//   }
// };

// /**
//  * Your MyStack object will be instantiated and called as such:
//  * MyStack* obj = new MyStack();
//  * obj->push(x);
//  * int param_2 = obj->pop();
//  * int param_3 = obj->top();
//  * bool param_4 = obj->empty();
//  */

class MyStack
{
public:
  queue<int> q;

  MyStack()
  {
  }

  void push(int x)
  {
    q.push(x);
    for (int i = 0; i < q.size() - 1; i++)
    {
      int temp = q.front();
      q.pop();
      q.push(temp);
    }
  }

  int pop()
  {
    int temp = q.front();
    q.pop();
    return temp;
  }

  int top()
  {
    return q.front();
  }

  bool empty()
  {
    return q.size() ? false : true;
  }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */