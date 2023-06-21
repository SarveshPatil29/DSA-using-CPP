// https://leetcode.com/problems/reverse-nodes-in-k-group/

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
  ListNode *reverseKGroup(ListNode *head, int k)
  {
    if (k == 1 || head == NULL || head->next == NULL)
    {
      return head;
    }

    int length = 0;
    ListNode *temp = head;
    while (temp)
    {
      temp = temp->next;
      length++;
    }

    ListNode *dummy = new ListNode(-1);
    dummy->next = head;

    ListNode *cur = dummy;
    ListNode *nex = dummy;
    ListNode *pre = dummy;

    while (length >= k)
    {
      cur = pre->next;
      nex = cur->next;
      for (int i = 1; i < k; i++)
      {
        cur->next = nex->next;
        nex->next = pre->next;
        pre->next = nex;
        nex = cur->next;
      }
      length -= k;
      pre = cur;
    }

    return dummy->next;
  }
};