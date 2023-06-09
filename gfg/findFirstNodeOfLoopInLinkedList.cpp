// https://practice.geeksforgeeks.org/problems/44bb5287b98797782162ffe3d2201621f6343a4b/1

/*struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution
{
public:
  // Function to find first node if the linked list has a loop.
  int findFirstNode(Node *head)
  {
    if (head == NULL || head->next == NULL)
    {
      return -1;
    }
    Node *slow = head;
    Node *fast = head;
    Node *entry = head;

    while (fast->next && fast->next->next)
    {
      slow = slow->next;
      fast = fast->next->next;
      if (slow == fast)
      {
        break;
      }
    }

    if (fast->next == NULL || fast->next->next == NULL)
    {
      return -1;
    }

    while (entry != slow)
    {
      entry = entry->next;
      slow = slow->next;
    }

    return slow->data;
  }
};