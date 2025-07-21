#include <iostream>
#include <queue>
using namespace std;

class Queues{
  private:
    int size;
    int front;
    int rear;
    int *Q;
    public:
    // Constxructor value:
    // Queues(int sz){(sz), Q(new int[q=>size]), front(-1), rear(-1);}
    Queues(int sz): size(sz), front(-1), rear(-1){
      Q=new int[size];
    }
    // Destructor value:
    // ~Queues(delete [] Q);
    ~Queues(){delete [] Q;}

    // All element valus.
  //  void Enqueue(Queues *Q, int x){
   void Enqueue(int x){
  // if(Q->rear==q->size-1)
  if(isFull()){
    cout<<"Queues is full";
    return;
  }
  // the front should move to one step
  if(front==-1)front=0;
      // Q->rear++;
      // rear++;
      // Q->q[q->rear]=x;
      Q[rear++]=x;
   }
// void Dequeue(Queues *q){
int Dequeue(){

  int x=-1;
  // if(q->front==q->rear)
  if(isEmpty())
    cout<<"Queue is Empty";
    // add both value.
    int val=Q[front];
    if(front==rear) front=rear=-1;
    else
      // q->front++;
      front++;
      // x=q->Q[q->front];
        // x=Q[front];
    
    return val;
}

int isFull(){
    // if(rear==size-1) cout<<"Queue is Full";
    return rear==size-1;
}

int isEmpty(){
    // if(front==rear) cout<<"Queue is empty";
    return front==rear;
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