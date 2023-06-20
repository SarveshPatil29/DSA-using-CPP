// https://practice.geeksforgeeks.org/problems/find-pairs-with-given-sum-in-doubly-linked-list/1

/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution
{
public:
  vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
  {
    vector<pair<int, int>> ans;
    Node *left = head;
    Node *right = head;

    while (right->next)
    {
      right = right->next;
    }

    while (left != right)
    {
      if (left->data + right->data == target)
      {
        ans.push_back({left->data, right->data});
        left = left->next;
      }
      else if (left->data + right->data > target)
      {
        right = right->prev;
      }
      else
      {
        left = left->next;
      }
    }

    return ans;
  }
};