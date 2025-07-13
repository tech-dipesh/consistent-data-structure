#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
};

Node *first = nullptr, *second = nullptr, *third = nullptr;

void Display(Node *p){
  while (p){
    cout<<p->data;
    p = p->next;
  }
}
void create(int A[], int n){
  struct Node *t, *last;
  // first = (struct Node *)malloc(sizeof(struct Node));
  int first=new Node();
  first->data = A[0];
  first->next = nullptr;
  last = first;
  for (int i = 1; i < n; i++){
    // t = (struct Node *)malloc(sizeof(struct Node));
    t=new Node();
    t->data = A[i];
    t->next = nullptr;
    last->next = t;
    last = t;
  }
}
void create2(int A[], int n){
  struct Node *t, *last;
  // second = (struct Node *)malloc(sizeof(struct Node));
  second=new Node();
  second->data = A[0];
  second->next = nullptr;
  last = second;
  for (int i = 1; i < n; i++)
  {
    // t = (struct Node *)malloc(sizeof(struct Node));
    t=new Node();
    t->data = A[i];
    t->next = nullptr;
    last->next = t;
    last = t;
  }
}
void Merge(struct Node *p, struct Node *q){
  Node *last;
  if (p->data < q->data){
    third = last = p;
    p = p->next;
    third->next = nullptr;
  }
  else{
    third = last = q;
    q = q->next;
    third->next = nullptr;
  }
  while (p && q){
    if (p->data < q->data){
      last->next = p;
      last = p;
      p = p->next;
      last->next = nullptr;
    }
    else{
      last->next = q;
      last = q;
      q = q->next;
      last->next = nullptr;
    }
  }
  if (p)
    last->next = p;
  if (q)
    last->next = q;
}
int main(){
  int A[] = {10, 20, 40, 50, 60};
  int B[] = {15, 18, 25, 30, 55};
  create(A, 5);
  create2(B, 5);
  Merge(first, second);
  Display(third);
  return 0;
}