// https://leetcode.com/problems/reverse-linked-list/

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
  ListNode *reverseList(ListNode *head)
  {
    ListNode *temp = head;

    if (head == NULL || head->next == NULL)
    {
      return head;
    }

    ListNode *nextNode = temp->next;
    ListNode *prevNode = temp;

    temp->next = NULL;
    temp = nextNode;

    while (temp->next)
    {
      nextNode = temp->next;
      temp->next = prevNode;
      prevNode = temp;
      temp = nextNode;
    }

    temp->next = prevNode;
    head = temp;

    return head;
  }
};