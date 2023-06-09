// https://leetcode.com/problems/linked-list-cycle-ii/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
  ListNode *detectCycle(ListNode *head)
  {
    if (head == NULL || head->next == NULL)
    {
      return NULL;
    }
    ListNode *slow = head;
    ListNode *fast = head;
    ListNode *entry = head;

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
      return NULL;
    }

    while (entry != slow)
    {
      entry = entry->next;
      slow = slow->next;
    }

    return slow;
  }
};