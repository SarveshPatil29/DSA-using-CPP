// https://practice.geeksforgeeks.org/problems/remove-duplicates-from-a-sorted-doubly-linked-list/1

/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};
*/

class Solution
{
public:
  Node *removeDuplicates(struct Node *head)
  {
    Node *curr = head;
    while (curr->next)
    {
      int value = curr->data;
      Node *temp = curr->next;
      while (temp && temp->data == value)
      {
        temp = temp->next;
      }
      if (temp)
      {
        curr->next = temp;
        temp->prev = curr;
        curr = curr->next;
      }
      else
      {
        curr->next = NULL;
      }
    }
    return head;
  }
};