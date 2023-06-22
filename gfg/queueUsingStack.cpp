// https://practice.geeksforgeeks.org/problems/queue-using-stack/1

class Queue
{
  stack<int> input, output;

public:
  void enqueue(int x)
  {
    input.push(x);
  }

  int dequeue()
  {
    if (input.size() == 0 && output.size() == 0)
    {
      return -1;
    }

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
};