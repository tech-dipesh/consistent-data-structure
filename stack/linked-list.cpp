#include <iostream>
using namespace std;
struct Node{
  int data;
  Node *next;
};

Node *top=nullptr;

class LinkedList{
      public:
        void Push(int x);
        int Pop();
        void Display();
  };
    
 void LinkedList::Push(int x){
  Node *t=new Node();
  if(t==nullptr)
      cout<<"stack is full"<<endl;
     else{
       t->data=x;
      t->next=top;
      top=t;
     }
 }


 int LinkedList::Pop(){
  Node *t;
    int x=-1;
  if(top==nullptr)
      cout<<"STack is empty";
      else{
        t=top;
        top=top->next;
        x=t->data;
        delete t;
      }
      return x;
 }
 void LinkedList::Display(){
  Node *p;
  p=top;
  while(p){
    cout<<p->data<<"-";
    p=p->next;
  }
    cout<<endl;
 }
 
 int main(){

  // create an object instance
  LinkedList stack;
  stack.Push(10);
  stack.Push(20);
  stack.Push(30);

  stack.Display();
  cout<<stack.Pop()<<endl;
return 0;
}