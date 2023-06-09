// https://practice.geeksforgeeks.org/problems/find-length-of-loop/1

/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

// Function to find the length of a loop in the linked list.
int countNodesinLoop(struct Node *head)
{
  if (head == NULL || head->next == NULL)
  {
    return 0;
  }
  Node *slow = head;
  Node *fast = head;

  int length = 1;

  while (fast->next && fast->next->next)
  {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast)
    {
      slow = slow->next;
      while (slow != fast)
      {
        length++;
        slow = slow->next;
      }
      return length;
    }
  }
  return 0;
}