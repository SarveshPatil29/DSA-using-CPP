// https://practice.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/1

class Solution
{
public:
  Node *copyList(Node *head)
  {
    if (head == NULL)
    {
      return NULL;
    }

    Node *temp = head;

    while (temp)
    {
      Node *newNode = new Node(temp->data);
      newNode->next = temp->next;
      temp->next = newNode;
      temp = newNode->next;
    }

    temp = head;

    while (temp)
    {
      if (temp->arb)
      {
        temp->next->arb = temp->arb->next;
      }
      temp = temp->next->next;
    }

    Node *newHead = head->next;

    temp = head;
    Node *temp2 = head->next;

    while (temp2->next)
    {
      temp->next = temp->next->next;
      temp2->next = temp2->next->next;
      temp = temp->next;
      temp2 = temp2->next;
    }

    temp->next = NULL;

    return newHead;
  }
};