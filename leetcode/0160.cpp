// https://leetcode.com/problems/intersection-of-two-linked-lists/

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
  ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
  {
    set<ListNode *> mySet;
    ListNode *temp1 = headA;
    ListNode *temp2 = headB;

    while (temp1)
    {
      mySet.insert(temp1);
      temp1 = temp1->next;
    }

    while (temp2 && !mySet.count(temp2))
    {
      temp2 = temp2->next;
    }

    return temp2;
  }
};