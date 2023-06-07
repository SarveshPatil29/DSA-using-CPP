// https://practice.geeksforgeeks.org/problems/delete-node-in-doubly-linked-list/1

/* Structure of Node
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;

  Node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }

};
*/

class Solution
{
public:
  Node *deleteNode(Node *head_ref, int x)
  {
    Node *temp = head_ref;
    while (x > 1)
    {
      temp = temp->next;
      x--;
    }

    if (temp->next == NULL)
    {
      temp->prev->next = NULL;
      return head_ref;
    }

    if (temp->prev == NULL)
    {
      temp->next->prev = NULL;
      head_ref = temp->next;
      return head_ref;
    }

    Node *prevNode = temp->prev;
    Node *nextNode = temp->next;

    prevNode->next = nextNode;
    nextNode->prev = prevNode;
    temp->next = NULL;
    temp->prev = NULL;

    return head_ref;
  }
};