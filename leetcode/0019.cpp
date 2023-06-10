// https://leetcode.com/problems/remove-nth-node-from-end-of-list/

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution
// {
// public:
//   ListNode *removeNthFromEnd(ListNode *head, int n)
//   {
//     if (head == NULL || head->next == NULL)
//     {
//       return NULL;
//     }

//     int length = 0;
//     ListNode *temp = head;

//     while (temp)
//     {
//       length++;
//       temp = temp->next;
//     }

//     cout << length << " ";

//     int toRemove = length - n;
//     temp = head;
//     cout << toRemove << " ";
//     if (toRemove < 1)
//     {
//       head = head->next;
//       return head;
//     }
//     while (toRemove > 1)
//     {
//       temp = temp->next;
//       toRemove--;
//     }

//     temp->next = temp->next->next;
//     return head;
//   }
// };

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
  ListNode *removeNthFromEnd(ListNode *head, int n)
  {
    ListNode *fast = head;
    ListNode *slow = head;

    while (n)
    {
      fast = fast->next;
      n--;
    }

    if (fast == NULL)
    {
      head = head->next;
      return head;
    }

    while (fast->next)
    {
      fast = fast->next;
      slow = slow->next;
    }

    slow->next = slow->next->next;
    return head;
  }
};