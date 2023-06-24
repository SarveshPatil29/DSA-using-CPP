// https://leetcode.com/problems/copy-list-with-random-pointer/

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution
{
public:
  Node *copyRandomList(Node *head)
  {
    if (head == NULL)
    {
      return NULL;
    }

    Node *temp = head;

    while (temp)
    {
      Node *newNode = new Node(temp->val);
      newNode->next = temp->next;
      temp->next = newNode;
      temp = newNode->next;
    }

    temp = head;

    while (temp)
    {
      if (temp->random)
      {
        temp->next->random = temp->random->next;
      }
      temp = temp->next->next;
    }

    Node *newHead = head->next;

    temp = head;
    Node *temp2 = head->next;

    while (temp2->next)
    {
      temp->next = temp->next->next;
      temp2->next = temp2->next->next;
      temp = temp->next;
      temp2 = temp2->next;
    }

    temp->next = NULL;

    return newHead;
  }
};