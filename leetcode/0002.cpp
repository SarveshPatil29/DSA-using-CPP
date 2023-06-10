// https://leetcode.com/problems/add-two-numbers/

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
//   ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
//   {
//     int carry = 0;
//     int sum = l1->val + l2->val;

//     if (sum >= 10)
//     {
//       sum -= 10;
//       carry = 1;
//     }

//     ListNode *l3 = new ListNode(sum);
//     l1 = l1->next;
//     l2 = l2->next;
//     ListNode *curr = l3;

//     while (l1 && l2)
//     {
//       sum = l1->val + l2->val + carry;
//       carry = 0;
//       if (sum >= 10)
//       {
//         sum -= 10;
//         carry = 1;
//       }
//       ListNode *temp = new ListNode(sum);
//       curr->next = temp;
//       curr = curr->next;
//       l1 = l1->next;
//       l2 = l2->next;
//     }

//     while (l1)
//     {
//       sum = l1->val + carry;
//       carry = 0;
//       if (sum >= 10)
//       {
//         sum -= 10;
//         carry = 1;
//       }
//       ListNode *temp = new ListNode(sum);
//       curr->next = temp;
//       curr = curr->next;
//       l1 = l1->next;
//     }

//     while (l2)
//     {
//       sum = l2->val + carry;
//       carry = 0;
//       if (sum >= 10)
//       {
//         sum -= 10;
//         carry = 1;
//       }
//       ListNode *temp = new ListNode(sum);
//       curr->next = temp;
//       curr = curr->next;
//       l2 = l2->next;
//     }

//     if (carry)
//     {
//       ListNode *temp = new ListNode(1);
//       curr->next = temp;
//       curr = curr->next;
//     }

//     return l3;
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
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
  {
    ListNode *dummy = new ListNode();
    ListNode *temp = dummy;
    int carry = 0;

    while (l1 || l2 || carry)
    {
      int sum = carry;

      if (l1)
      {
        sum += l1->val;
        l1 = l1->next;
      }

      if (l2)
      {
        sum += l2->val;
        l2 = l2->next;
      }

      carry = sum / 10;
      sum = sum % 10;

      ListNode *newNode = new ListNode(sum);
      temp->next = newNode;
      temp = temp->next;
    }

    return dummy->next;
  }
};