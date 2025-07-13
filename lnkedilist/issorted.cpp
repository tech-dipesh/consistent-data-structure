#include <iostream>
using namespace std;
    struct Node
{
  int data;
   Node *next;
};
Node *first = nullptr;
void Display(Node *p){
  while (p != nullptr){
    cout<<p->data<<" ";
    p = p->next;
  }
  cout<<endl;
}
void create(int A[], int n)
{
  Node *t, *last;
  first =new Node();
  first->data = A[0];
  first->next = nullptr;
  last = first;
  for (int i = 1; i < n; i++)
  {
    t=new Node();
    t->data = A[i];
    t->next = nullptr;
    last->next = t;
    last = t;
  }
}
int isSorted(Node *p)
{
  if(p==nullptr) return 1;

  int x = p->data;
  while (p != nullptr){
    if (p->data < x)
      return 0;
    x = p->data;
    p = p->next;
  }
  return 1;
}

void FreeList(Node *p){
  while(p){
    Node *temp=p;
    p=p->next;
    delete temp;
  }
}

int main()
{
  int A[] = {10, 20, 30, 40, 50};
  create(A, 5);
  cout<<isSorted(first);
  return 0;
}