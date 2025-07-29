#include <iostream>
#include <queue>
using namespace std;

class Node{
  public:
  Node *lchild;
  int data;
  Node *rchild;
};


class Queues{
  private:
  // for the data member
    int size;
    int front;
    int rear;
    // int *Q;
    Node **Q;
    public:
    // Constructor value:
    // Queues(int sz){(sz), Q(new int[q=>size]), front(-1), rear(-1);}
    // Queues(int sz): size(sz), front(-1), rear(-1){
      // Q=new int[size];
    Queues(int sz=10): size(sz), front(-1), rear(-1) {
      Q=new Node*[size];
    }
    // Destructor value:
    // ~Queues(delete [] Q);
    ~Queues(){delete [] Q;}

    bool isFull()const {
        return rear==size-1;
    }
    
    bool isEmpty()const{
        return front==rear;
    }
    // All element valus.
  //  void Enqueue(Queues *Q, int x){
   void Enqueue(Node *x){
  // if(Q->rear==q->size-1)
  if(isFull()){
    cout<<"Queues is full";
    return;
  }
    Q[rear++]=x;
   }
// void Dequeue(Queues *q){
Node  *Dequeue(){
  if(isEmpty()){
    cout<<"Queue is Empty";
    return nullptr;
}
    else
      return Q[front++];
}


// void Display(Queues *q, int size){
void Display()const{
  if(isEmpty()){
    cout<<"Queues is empty";
    return;
  }
  // for(int i=0;i<size;i++)
  // first value will start from front+1 due to the, the first value will be after a the front value with two pointer apporach
  for(int i=front+1;i<=rear;i++)
    cout<<Q[i]<<" ";
    cout<<endl;
}
  
};


int main(){
  int size;
  cout<<"Enter Size";
  // cin>>q->size;
  cin>>size;
  
  // create the queues with the specified size
  Queues q(size);
  q.Enqueue(10);
  q.Enqueue(25);
  q.Enqueue(30);
  q.Enqueue(35);

  q.Display();
//  cout<<"Dequeue value is:"<<q.Dequeues<<endl;
 cout<<"Dequeue value is:"<<q.Dequeue()<<endl;
  
 q.Display();
  return 0;
}