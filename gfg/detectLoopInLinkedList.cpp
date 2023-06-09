// https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1

// /*

// struct Node
// {
//     int data;
//     struct Node *next;
//     Node(int x) {
//         data = x;
//         next = NULL;
//     }

// */
// class Solution
// {
// public:
//   // Function to check if the linked list has a loop.
//   bool detectLoop(Node *head)
//   {
//     if (head == NULL)
//     {
//       return false;
//     }

//     set<Node *> mySet;
//     while (!mySet.count(head))
//     {
//       mySet.insert(head);
//       if (head->next == NULL)
//       {
//         return false;
//       }
//       head = head->next;
//     }
//     return true;
//   }
// };

/*

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution
{
public:
  // Function to check if the linked list has a loop.
  bool detectLoop(Node *head)
  {
    if (head == NULL || head->next == NULL)
    {
      return false;
    }

    Node *slow = head;
    Node *fast = head;

    while (fast->next && fast->next->next)
    {
      slow = slow->next;
      fast = fast->next->next;
      if (slow == fast)
      {
        return true;
      }
    }

    return false;
  }
};