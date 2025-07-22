#include <iostream>

using namespace std;

class LinkedList{
  private:
  struct Node{
  int data;
  Node *next;
  };
  Node *front=nullptr, *rear=nullptr;
  public:
  // Destructor value:
  ~LinkedList(){
    while(front){
      // front=front->next;
      Node *temp=front;
      front=front->next;
      delete front;
    }
    // The last value shoudl point on last node.
    rear=nullptr;
  }

  void Enqueue(int x){
    Node *t=new Node();
    if(t==nullptr) cout<<"Queue is full";
    else{
      t->data=x;
      t->next=nullptr;
      // this is the first node if value:
      if(front==nullptr)
        front=rear=t;
        else{
          rear->next=t;
          rear=t;
        }
    }
  }
  int Dequeue(){
    int x=-1;
    Node *t;
    if(front==nullptr)cout<<"Queue is empty"<<endl;
    else{
      x=front->data;
      t=front;
      front=front->next;
      delete t;
    }
    return x;
  }
  void Display(){
    // Node *p;
    Node *p=front;
    while(p){
      cout<<p->data<<"->";
      p=p->next;
    }
    cout<<endl;
  }
};

int main(){
   LinkedList l;
   l.Enqueue(10);
   l.Enqueue(70);
   l.Enqueue(50);
   l.Enqueue(20);

   l.Display();

   cout<<l.Dequeue();
  return 0;
}