#include <iostream>
using namespace std;
struct Node
{
  int data;
  struct Node *next;
};

Node* first = nullptr;

int count(Node *p);

void create(int A[], int n)
{
  struct Node *t, *last;
  first =new Node();
  first->data = A[0];
  first->next = NULL;
  last = first;
  for (int i = 1; i < n; i++){
    t=new Node();
    t->data = A[i];
    t->next = NULL;
    last->next = t;
    last = t;
  }
}
void Display(Node *p)
{
  while (p != NULL)
  {
    cout<<p->data<<" ";
    p = p->next;
  }
  cout<<endl;
}

int count(Node* p){
  int c=0;
  while(p!=nullptr){
    c++;
    p=p->next;

  }
  return c;
}
void Insert( Node *p, int index, int x)
{
  struct Node *t;
  if (index < 0 || index > count(p))
    return;
    t=new Node();
  t->data = x;

  if (index == 0)
  {
    t->next = first;
    first = t;
  }
  else{
    for (int i = 0; i < index - 1 && p; i++)
      p = p->next;
      if(p){
    t->next = p->next;
    p->next = t;
      }
  }
}
int main()
{
  Insert(first, 0, 15);
  Insert(first, 0, 8);
  Insert(first, 0, 9);
  Insert(first, 1, 10);
  Display(first);
  return 0;
}