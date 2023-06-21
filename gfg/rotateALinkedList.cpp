// https://practice.geeksforgeeks.org/problems/rotate-a-linked-list/1

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

class Solution
{
public:
  // Function to rotate a linked list.
  Node *rotate(Node *head, int k)
  {
    if (k == 0 || head == NULL || head->next == NULL)
    {
      return head;
    }
    int length = 0;
    Node *temp = head;

    while (temp)
    {
      length++;
      temp = temp->next;
    }

    k = length - k;

    if (k % length == 0)
    {
      return head;
    }

    int tail = length - (k % length);
    temp = head;
    while (tail > 1)
    {
      temp = temp->next;
      tail--;
    }

    Node *newHead = temp->next;
    temp->next = NULL;
    temp = newHead;
    while (temp->next)
    {
      temp = temp->next;
    }

    temp->next = head;
    head = newHead;

    return head;
  }
};