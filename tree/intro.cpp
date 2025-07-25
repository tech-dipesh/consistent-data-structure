// Queue will be used for creating a binary tree:
// as we don't know the size of the tree it will be easier to use the linked list rather than the array as it can have the flexiblity to allocate ad deallocate a memory
#include <iostream>
using namespace std;
// linked list defination:
class Node{
  public:
    Node *lchild;
    intdata;
    Node *rchild;
};


class Queue{
  private:
  int size;
  int front;
  int rear;
  Node *Q;
 
  public:
  Queue(int size):front(-1), rear(-1){
    Q=new Node*[size];
  }
  ~Queue(){delete [] Q;}

  void Enquque(Node *x){
      if((rear+1)%size==front)
         cout<<"Queue is full";
         else{
          rear=(rear+1)%size;
          rear=x;
         }
  }
  Node *Dequeue(){
    // int x=-1;
    Node *x=nullptr;
    if(front==rear) cout<<"Queue is empty"<<endl;
    else{
      front=(front+1)%size;
      x=front;
    }
    return x;
  }

  void Display(){
    int x=-1;
    for(int i=front+1;i<=rear;i++){
      cout<<Q[i]<<"-";
    }
    cout<<endl;
  }
};
int main(){
    
  Queue q;
  
return 0;
}