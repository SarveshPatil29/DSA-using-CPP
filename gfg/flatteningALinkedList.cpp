// https://practice.geeksforgeeks.org/problems/flattening-a-linked-list/1

/* Node structure  used in the program

struct Node{
  int data;
  struct Node * next;
  struct Node * bottom;

  Node(int x){
      data = x;
      next = NULL;
      bottom = NULL;
  }

};
*/

Node *merge(Node *node, Node *next)
{
  node->next == NULL;
  Node *left = node;
  Node *right = next;
  Node *temp = left;
  Node *dummy = new Node(-1);
  dummy->bottom = left;
  left = left->bottom;

  while (left && right)
  {
    if (left->data <= right->data)
    {
      temp->bottom = left;
      temp = temp->bottom;
      left = left->bottom;
    }
    else
    {
      temp->bottom = right;
      temp = temp->bottom;
      right = right->bottom;
    }
  }

  if (left)
  {
    temp->bottom = left;
  }
  else
  {
    temp->bottom = right;
  }

  return dummy->bottom;
}

Node *solve(Node *node)
{
  if (node->next == NULL)
  {
    return node;
  }

  Node *next = solve(node->next);

  return merge(node, next);
}

/*  Function which returns the  root of
    the flattened linked list. */
Node *flatten(Node *root)
{
  return solve(root);
}