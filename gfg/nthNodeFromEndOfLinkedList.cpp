// https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1

/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

// Function to find the data of nth node from the end of a linked list.
class Solution
{
public:
  int getNthFromLast(Node *head, int n)
  {
    if (head == NULL)
    {
      return -1;
    }

    int length = 0;
    Node *temp = head;

    while (temp)
    {
      length++;
      temp = temp->next;
    }

    if (n > length)
    {
      return -1;
    }

    int toRemove = length - n;
    temp = head;

    if (toRemove < 1)
    {
      int ans = head->data;
      head = head->next;
      return ans;
    }

    while (toRemove > 1)
    {
      temp = temp->next;
      toRemove--;
    }

    int ans = temp->next->data;
    temp->next = temp->next->next;
    return ans;
  }
};