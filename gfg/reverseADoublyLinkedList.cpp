// https://practice.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1

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
Node *reverseDLL(Node *head)
{
  Node *temp = head;

  if (temp->next == NULL)
  {
    return head;
  }

  temp->prev = temp->next;
  temp->next = NULL;
  temp = temp->prev;

  while (temp->next != NULL)
  {
    Node *nextNode = temp->next;
    temp->next = temp->prev;
    temp->prev = nextNode;
    temp = temp->prev;
  }

  temp->next = temp->prev;
  temp->prev = NULL;

  head = temp;
  return head;
}