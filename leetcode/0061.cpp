// https://leetcode.com/problems/rotate-list/

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
  ListNode *rotateRight(ListNode *head, int k)
  {
    if (k == 0 || head == NULL || head->next == NULL)
    {
      return head;
    }
    int length = 0;
    ListNode *temp = head;

    while (temp)
    {
      length++;
      temp = temp->next;
    }

    if (k % length == 0)
    {
      return head;
    }

    int tail = length - (k % length);
    temp = head;
    while (tail > 1)
    {
      temp = temp->next;
      tail--;
    }

    ListNode *newHead = temp->next;
    temp->next = NULL;
    temp = newHead;
    while (temp->next)
    {
      temp = temp->next;
    }

    temp->next = head;
    head = newHead;

    return head;
  }
};