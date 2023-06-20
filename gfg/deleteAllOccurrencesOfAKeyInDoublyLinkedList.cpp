// https://practice.geeksforgeeks.org/problems/delete-all-occurrences-of-a-given-key-in-a-doubly-linked-list/1

/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

class Solution
{
public:
  void deleteAllOccurOfX(struct Node **head_ref, int x)
  {
    Node *curr = *head_ref;

    while (curr)
    {
      if (curr->data == x)
      {
        if (curr->prev == NULL)
        { // First Node
          *head_ref = curr->next;
        }
        else if (curr->next == NULL)
        { // Last Node
          curr->prev->next = NULL;
        }
        else
        {
          curr->prev->next = curr->next;
          curr->next->prev = curr->prev;
        }
      }
      curr = curr->next;
    }
  }
};