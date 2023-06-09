// https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1

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
  Node *reverse(Node *&head)
  {
    Node *next = NULL;
    Node *prev = NULL;

    while (head)
    {
      next = head->next;
      head->next = prev;
      prev = head;
      head = next;
    }

    return prev;
  }

  // Function to check whether the list is palindrome.
  bool isPalindrome(Node *head)
  {
    if (head == NULL || head->next == NULL)
    {
      return true;
    }

    Node *slow = head;
    Node *fast = head;

    while (fast->next && fast->next->next)
    {
      slow = slow->next;
      fast = fast->next->next;
    }

    slow->next = reverse(slow->next);
    slow = slow->next;

    while (slow)
    {
      if (head->data != slow->data)
      {
        return false;
      }
      slow = slow->next;
      head = head->next;
    }

    return true;
  }
};