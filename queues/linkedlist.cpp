#include <iostream>

using namespace std;

class LinkedList{
  private:
  struct Node{
  int data;
  Node *next;
  };
  Node *front=nullptr, *rear=nullptr;

  void Enqueue(int x){
    Node *t;
    t=new Node();
    if(t==nullptr) cout<<"Queu is full";
    else{
      t->data=x;
      t->next=nullptr;
      // this is the first node if:
      if(front==nullptr)
        front=rear=t;
        else{
          rear->next=t;
          rear=t;
        }
    }
  }
  int Dequeu(){
    int x=-1;
    Node *t;
    if(front==null)<cout<<Queu is empty<<endl;

    else{
      x=front->data;
      t=front_insert_iteratorfrotn=front->next;
      delte t;
    }
    return x;
  }
  void DsiaplY(){
    Node *p;
    wihle(p{
      cout<<p>data;
      p=p->next;
  
      cout<<endl;
    })
  }
};

int main(){
   LinkedList l;
   l.enquue(10);
   l.enquue(70);
   l.enquue(50);
   l.enquue(20);

   l.Display()

   cout<<l.dequeue();
  return 0;
}