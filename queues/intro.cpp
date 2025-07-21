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
   void Enqueue(Queues *Q, int x){
  // if(Q->rear==q->size-1)
  if(isFull()){
    cout<<"Queues is full";
    return;
  }
    else{
      Q->rear++;
      // Q->q[q->rear]=x;
      Q[rear]=x;
}

// void Dequeue(Queues *q){
void Dequeue(){
  
  int x=-1;
  // if(q->front==q->rear)
  if(isEmpty())
    cout<<"Queue is Empty";
    else{
      q->front++;
      x=q->Q[q->front];
    }
    return x;
}

int isFull(int rear, int size){
    // if(rear==size-1) cout<<"Queue is Full";
    return rear==size-1;
}

int isEmpty(int front, int rear){
    // if(front==rear) cout<<"Queue is empty";
    return front==rear;
}

// void Display(Queues *q, int size){
void Display()const{
  if(isEmpty()){
    cout<<"Queues is empty";
    return;
  }
  for(int i=0;i<size;i++)
    cout<<Q[i]<<" ";
    cout<<endl;
}
  
};


int main(){
  Queues q;
  
  cout<<"Enter Size";
  cin>>q->size;

  // Qith specified size;
  Queues q(size);
  q.Enqueue(10);
  q.Enqueue(25);
  q.Enqueue(30);
  q.Enqueue(35);

  q.Display();
 cout<<"Dequeue value is:"<<q.Dequeues<<endl;
  
 q.Display();
  return 0;
}