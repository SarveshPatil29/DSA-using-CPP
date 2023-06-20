// https://practice.geeksforgeeks.org/problems/segregate-even-and-odd-nodes-in-a-linked-list5035/1

/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
public:
  Node *divide(int N, Node *head)
  {
    Node *temp = new Node(0);
    temp->next = head;
    Node *even = temp;
    Node *odd = temp;

    Node *oddHead = temp;
    Node *evenHead = temp;

    Node *curr = head;

    while (curr)
    {
      if (curr->data % 2 == 0)
      {
        if (even == temp)
        {
          evenHead = curr;
        }
        even->next = curr;
        even = curr;
        curr = curr->next;
      }
      else
      {
        if (odd == temp)
        {
          oddHead = curr;
        }
        odd->next = curr;
        odd = curr;
        curr = curr->next;
      }
    }

    if (even == temp)
    {
      return oddHead;
    }
    if (odd == temp)
    {
      return evenHead;
    }

    even->next = oddHead;
    odd->next = NULL;
    return evenHead;
  }
};