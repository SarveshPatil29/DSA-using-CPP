// https://practice.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1

Node *deleteNode(Node *head, int x)
{
  if (x == 1)
  {
    head = head->next;
    return head;
  }

  int cnt = 1;
  Node *temp = head;

  while (cnt < x - 1)
  {
    temp = temp->next;
    cnt++;
  }

  Node *nodeToDel = temp->next;
  temp->next = nodeToDel->next;

  return head;
}