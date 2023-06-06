// https://practice.geeksforgeeks.org/problems/introduction-to-linked-list/1

class Solution
{
public:
  Node *constructLL(vector<int> &arr)
  {
    Node *head = new Node(arr[0]);

    Node *temp = head;
    for (int i = 1; i < arr.size(); i++)
    {
      Node *newNode = new Node(arr[i]);
      temp->next = newNode;
      temp = newNode;
    }

    return head;
  }
};