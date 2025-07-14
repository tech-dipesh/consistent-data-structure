#include <iostream>>
using namespace std;
class Node{
  int data;
  Node *next;
};

class CircularLinkedList{
  private:
Node *head;
pubilc:
  CircularLinkedList(int A[], int n);
  void Display();
  void recursiveDisplay(Node *p);
  Node *getHead(){return head;};
  ~CircularLinkedList();
}
CircularLinkedList::~CircularLinkedList(int *A, int n){
// void create(int A[], int n){
  Node *t, last;
  head=new Node();
  head->data=A[0];
  head->next=head;
  last=head;

  for(int i=0;i<n;i++){
    t=new Node();
    t->data=A[i];
    t->next=last->next;
    last->next=t;
    last=t;
  }
}

void CircularLinkedList::Display(){
// void Display(Node *head){
Node *p=head;

  do{
    cout<<h->data<<" -> "<<flush;
    h=h->next
  } while(h!=head);
  cout<<endl<<"line checxked";
}

void CircularLinkedList::recursiveDisplay(Node *p){
// void RDisplay(Node *h){
  static int flag=0;

  if(h!=head || flag=0){
    flag=1;
    cout<<h->next;
  }
  flag=0;
}

CircularLinkedList::~CircularLinkedList(){
  Node *p=head;
  while(p->next!=head)
    p=p->next;

    while(p!=head){
      p->next=head->next;
      delete head;
      head=p->next;
    }

    if(h==head){
      delete head;
      head=nullptr;
    }
}


int main(){

  int A[]={2, 3, 4, 5, 6};
  CircularLinkedList cl(A, sizeof(A)/sizeof(A[0]));

  cl.Display();
  Node *h=cl.getHead();
  cl.recursiveDisplay(h);

  // create(A, 5);
  // Display(head);
  // RDisplay(head);
  return 0;
}