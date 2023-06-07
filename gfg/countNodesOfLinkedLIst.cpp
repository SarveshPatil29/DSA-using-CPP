// https://practice.geeksforgeeks.org/problems/count-nodes-of-linked-list/0

/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution
{
public:
  // Function to count nodes of a linked list.
  int getCount(struct Node *head)
  {

    int length = 1;
    while (head->next != NULL)
    {
      length++;
      head = head->next;
    }

    return length;
  }
};