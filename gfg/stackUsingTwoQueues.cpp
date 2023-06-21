// https://practice.geeksforgeeks.org/problems/stack-using-two-queues/1

/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */

// Function to push an element into stack using two queues.
void QueueStack ::push(int x)
{
  q2.push(x);
  while (q1.size())
  {
    q2.push(q1.front());
    q1.pop();
  }
  swap(q1, q2);
}

// Function to pop an element from stack using two queues.
int QueueStack ::pop()
{
  if (q1.size())
  {
    int temp = q1.front();
    q1.pop();
    return temp;
  }
  return -1;
}