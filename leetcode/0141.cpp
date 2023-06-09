// https://leetcode.com/problems/linked-list-cycle/

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
  bool hasCycle(ListNode *head)
  {
    if (head == NULL)
    {
      return false;
    }

    set<ListNode *> mySet;
    while (!mySet.count(head))
    {
      mySet.insert(head);
      if (head->next == NULL)
      {
        return false;
      }
      head = head->next;
    }
    return true;
  }
};