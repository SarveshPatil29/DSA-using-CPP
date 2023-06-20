// https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1

// /*

//   Node is defined as
//   struct Node {
//     int data;
//     struct Node *next;
//     Node(int x) {
//         data = x;
//         next = NULL;
//     }
// };

// */
// class Solution
// {
// public:
//   // Function to sort a linked list of 0s, 1s and 2s.
//   Node *segregate(Node *head)
//   {
//     Node *temp = head;
//     int zeroes = 0;
//     int ones = 0;
//     int twoes = 0;

//     while (temp)
//     {
//       if (temp->data == 0)
//       {
//         zeroes++;
//       }
//       else if (temp->data == 1)
//       {
//         ones++;
//       }
//       else
//       {
//         twoes++;
//       }
//       temp = temp->next;
//     }

//     temp = head;

//     while (zeroes)
//     {
//       temp->data = 0;
//       temp = temp->next;
//       zeroes--;
//     }

//     while (ones)
//     {
//       temp->data = 1;
//       temp = temp->next;
//       ones--;
//     }

//     while (temp)
//     {
//       temp->data = 2;
//       temp = temp->next;
//     }

//     return head;
//   }
// };

/*

  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
public:
  // Function to sort a linked list of 0s, 1s and 2s.
  Node *segregate(Node *head)
  {
    if (!head || !head->next)
      return head;

    Node *zeroHead = new Node(-1);
    Node *zeroTail = zeroHead;

    Node *oneHead = new Node(-1);
    Node *oneTail = oneHead;

    Node *twoHead = new Node(-1);
    Node *twoTail = twoHead;

    while (head)
    {
      if (head->data == 0)
      {
        zeroTail->next = head;
        zeroTail = zeroTail->next;
      }
      else if (head->data == 1)
      {
        oneTail->next = head;
        oneTail = oneTail->next;
      }
      else if (head->data == 2)
      {
        twoTail->next = head;
        twoTail = twoTail->next;
      }

      head = head->next;
    }

    if (oneHead->next)
    {
      zeroTail->next = oneHead->next;
      oneTail->next = twoHead->next;
    }
    else
    {
      zeroTail->next = twoHead->next;
    }

    twoTail->next = NULL;

    return zeroHead->next;
  }
};