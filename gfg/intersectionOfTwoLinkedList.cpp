// https://practice.geeksforgeeks.org/problems/intersection-of-two-linked-list/1

/* structure of list node:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution
{
public:
  Node *findIntersection(Node *headA, Node *headB)
  {
    set<int> mySet;
    Node *temp2 = headB;

    while (temp2)
    {
      mySet.insert(temp2->data);
      temp2 = temp2->next;
    }

    Node *newHead = new Node(0);
    Node *temp3 = newHead;
    Node *temp1 = headA;

    while (temp1)
    {
      if (mySet.count(temp1->data))
      {
        Node *newNode = new Node(temp1->data);
        temp3->next = newNode;
        temp3 = temp3->next;
      }
      temp1 = temp1->next;
    }

    return newHead->next;
  }
};