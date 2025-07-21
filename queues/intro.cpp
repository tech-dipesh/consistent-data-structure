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
    // Constructor value:
    Queues(int sz){(sz), Q(new int[q=>size]), front(-1), rear(-1);}
    // Destructor value:
    ~Queues(delete [] Q);
      void Enqueue(int x);
      int Dequeue(int x);
      int isFull (int rear, int size);
      int isEmpty(int front, int rear);

};

void Queues::Enqueue(Queues *Q,  x){
  if(Q->rear==q->size-1)
    cout<<"Queues is full";
    else{
      Q->rear++;
      Q->q[q->rear]=x;
    }
}
int Queues::Dequeue(Queues *q){
  int x=-1;
  if(q->front==q->rear)
    cout<<"Queue is Empty";
    else{
      q->front++;
      x=q->Q[q->front];
    }
    return x;
}

void Queues::isFull(int rear, int size){
    if(rear==size-1) cout<<"Queue is Full";
}

void Queues::isEmpty(int front, int rear){
    if(front==rear) cout<<"Queue is empty";
}

int main(){
  Queues q;
  
  cout<<"Enter Size";
  cin>>q->size;

  
  q.Dequeue(10);
  q.Dequeue(25);
  q.Dequeue(30);
  q.Dequeue(35);

  q.Enqueue();
  q.Enqueue();
  q.Enqueue();

  
  q.isEmpty();

  q.isFull();
  return 0;
}