#include <iostream>
// #include <stdio.h>
// #include <stdlib.h>
using namespace std;
struct Node
{
  int data;
  Node *next;
};

Node *first = NULL;

void create(int A[], int n)
{
  int i;
  struct Node *t, *last;
  first = new Node;
  first->data = A[0];
  first->next = NULL;
  last = first;

  for (i = 1; i < n; i++)
  {
    t = new Node();
    t->data = A[i];
    t->next = NULL;
    last->next = t;
    last = t;
  }
}
Node *LSearch(struct Node *p, int key)
{
  Node *q;
  while (p != NULL)
  {
    if (key == p->data)
    {
      q->next = p->next;
      p->next = first;
      first = p;
      return p;
    }
    q = p;
    p = p->next;
  }
  return NULL;
}
struct Node *RSearch(struct Node *p, int key)
{
  if (p == NULL)
    return NULL;
  if (key == p->data)
    return p;
  return RSearch(p->next, key);
}
int main()
{
  struct Node *temp;
  int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
  create(A, 8);
  Node* temp = LSearch(first, 8);
  if (temp != nullptr)
    cout << temp->data;
  else
    cout << "Not Found";
  return 0;
}