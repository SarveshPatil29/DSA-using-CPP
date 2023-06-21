// https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1

/*
  Reverse a linked list
  The input list will have at least one element
  Return the node which points to the head of the new LinkedList
  Node is defined as
    struct node
    {
        int data;
        struct node* next;

        node(int x){
            data = x;
            next = NULL;
        }

    }*head;
*/

class Solution
{
public:
  struct node *reverse(struct node *head, int k)
  {
    node *curr = head;
    node *prev_first = NULL;
    bool isfirst_pass = true;
    while (curr != NULL)
    {
      node *first = curr;
      node *prev = NULL;
      int count = 0;
      while (curr != NULL && count < k)
      {
        node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
      }
      if (isfirst_pass)
      {
        head = prev;
        isfirst_pass = false;
      }

      else
      {
        prev_first->next = prev;
      }
      prev_first = first;
    }
    return head;
  }
};