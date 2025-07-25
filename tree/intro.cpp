// Queue will be used for creating a binary tree:
#include <iostream>
using namespace std;
class Queue{
  private:
  int size;
  int front;
  int rear;
  Node *Q;
  struct Node{
    Node *lchild;
    intdata;
    Node *rchild;
  }
  public:
  Queue(int size=10):front(0), rear(0){
    Q=new int[size];
  }
  ~Queue(){delete [] Q;}
  void Enquque(int x){
      if((rear+1)%size==front)
         cout<<"Queue is full";
         else{
          rear=(rear+1)%size;
          rear=x;
         }
  }
  int Dequeue(){
    int x=-1;
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