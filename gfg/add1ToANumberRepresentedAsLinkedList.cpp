// https://practice.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1

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
  Node *reverse(Node *&head)
  {
    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;

    while (curr)
    {
      prev = curr->next;
      curr->next = next;
      next = curr;
      curr = prev;
    }

    return next;
  }

  Node *addOne(Node *head)
  {
    Node *newHead = reverse(head);
    Node *temp = newHead;

    int sum = (temp->data + 1) % 10;
    int carry = (temp->data + 1) / 10;
    temp->data = sum;

    while (carry)
    {
      if (temp->next)
      {
        temp = temp->next;
        sum = (temp->data + carry) % 10;
        carry = (temp->data + carry) / 10;
        temp->data = sum;
      }
      else
      {
        Node *newNode = new Node(carry);
        carry = 0;
        temp->next = newNode;
      }
    }

    return reverse(newHead);
  }
};