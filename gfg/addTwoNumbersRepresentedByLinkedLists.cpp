// https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1

/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
public:
  Node *reverse(Node *head)
  {
    Node *curr = head;
    Node *prev = nullptr;
    Node *next = nullptr;
    while (curr != nullptr)
    {

      next = curr->next;
      curr->next = prev;

      prev = curr;
      curr = next;
    }

    return prev;
  }

  struct Node *addTwoLists(struct Node *l1, struct Node *l2)
  {
    Node *dummy = new Node(0);
    Node *temp = dummy;
    int carry = 0;

    l1 = reverse(l1);
    l2 = reverse(l2);

    while (l1 || l2 || carry)
    {
      int sum = carry;

      if (l1)
      {
        sum += l1->data;
        l1 = l1->next;
      }

      if (l2)
      {
        sum += l2->data;
        l2 = l2->next;
      }

      carry = sum / 10;
      sum = sum % 10;

      Node *newNode = new Node(sum);
      temp->next = newNode;
      temp = temp->next;
    }

    return reverse(dummy->next);
  }
};