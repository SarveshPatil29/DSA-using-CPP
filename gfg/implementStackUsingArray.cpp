// https://practice.geeksforgeeks.org/problems/implement-stack-using-array/1

// Function to push an integer into the stack.

/*
class MyStack
{
private:
    int arr[1000];
    int top;
public:
    MyStack(){top=-1;}
    int pop();
    void push(int);
};
*/

void MyStack ::push(int x)
{
  arr[top + 1] = x;
  top++;
}

// Function to remove an item from top of the stack.
int MyStack ::pop()
{
  if (top == -1)
  {
    return -1;
  }
  int temp = arr[top];
  top--;
  return temp;
}