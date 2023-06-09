// https://leetcode.com/problems/palindrome-linked-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
  ListNode *reverse(ListNode *&head)
  {
    ListNode *next = NULL;
    ListNode *prev = NULL;

    while (head)
    {
      next = head->next;
      head->next = prev;
      prev = head;
      head = next;
    }

    return prev;
  }

  bool isPalindrome(ListNode *head)
  {
    if (head == NULL || head->next == NULL)
    {
      return true;
    }

    ListNode *slow = head;
    ListNode *fast = head;

    while (fast->next && fast->next->next)
    {
      slow = slow->next;
      fast = fast->next->next;
    }

    slow->next = reverse(slow->next);
    slow = slow->next;

    while (slow)
    {
      if (head->val != slow->val)
      {
        return false;
      }
      slow = slow->next;
      head = head->next;
    }

    return true;
  }
};