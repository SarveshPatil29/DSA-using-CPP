// https://practice.geeksforgeeks.org/problems/insert-a-node-in-doubly-linked-list/1

/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

// Function to insert a new node at given position in doubly linked list.
void addNode(Node *head, int pos, int data)
{
  Node *temp = head;
  while (pos)
  {
    temp = temp->next;
    pos--;
  }

  Node *newNode = new Node(data);

  if (temp->next == NULL)
  {
    temp->next = newNode;
    newNode->prev = temp;
    return;
  }

  Node *nextNode = temp->next;

  temp->next = newNode;
  newNode->prev = temp;
  nextNode->prev = newNode;
  newNode->next = nextNode;
}