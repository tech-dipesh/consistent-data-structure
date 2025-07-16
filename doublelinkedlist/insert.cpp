#include <iostream>
using namespace std;
struct Node
{
  Node *prev;
  int data;
  Node *next;
};

Node *first=nullptr;

void Create (int A[], int n){
  Node *t, *last;
  Node *first=new Node();
  first->data=A[0];
  first->prev=first->next=nullptr;

  last=first;
  // by iterative
  for(int i=1;i<n;i++){
    Node *t=new Node();
    t->data=A[i];
    t->next=last->next;
    t->prev=last;
    last->next=t;
    last=t;
  }
}


void Display(Node *p){
  while(p){
    cout<<p->data<<" ";
    p=p->next;
  }
  cout<<endl;
}

int Length(Node *p){
  int len=0;
  while(p){
    len++;
    p=p->next;
  }  
  return len;
}

// main logic
void Insert(Node *head, int pos, int x){
  Node *t;
  if(index<0 || index>Length(p))
    return;
  
    // at index 0 variable
    if(index==0){
      Node *t=new Node();
      t->data=x;
      t->prev=nullptr;
      t->next=first;
      first->prev=t;
      first=t;
    }
    // insert at a given index
    else{
        for(int i=0;i<pos-1;i++)
          p=p->next;

        t->data=x;
        t->prev=p;
        t>next=p->next;
        if(p->next)p->next->prev=t;
        p->next=t;
    }

}
int main(){
  int A[]={20, 40, 60, 80, 100};
  Create(A, 5);
  cout<<"Lennght is:"<<endl<<Length(first);

  Display(first);
  return 0;
}