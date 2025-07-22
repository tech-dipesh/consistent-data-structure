// Basic structure with class componenet with cicular queues where the space is utilized after left that empty:

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

class Circular{
  private:
  int size;
  int front;
  int rear;
  int *Q;
  public:
  Circular(int sz):(sz), front(-1), rear(-1){int Q[size];}
  ~Circular(){delete [] Q;}
  void Enqueue(int x){
    if(isFull()) cout<<"Enqueue is Full";
    else{
      // Q[size]=;
      rear=(rear+1)%q;
      Q[rear]=x;
    }
  }
  int Dequeue(){
    int x=-1;
    if(isEmpty()) cout<<"Dequeue is Empty";
    else{
      front=(front+1)%size;
      x=Q[front];
    }
    return x;
  }

  void isFull(){
    if(rear+1==size)cout<<"Queue is full";
  }
  void isEmpty(){
    if(front==rear)cout<<"Queue is Empty";
  }

  void Display(){
    int i=front+1;
    for(int i=(i+1)%size;i!=(rear+1)%size;i++){
      cout<<Q[i];
    }
    cout<<endl;
  }
};

int main(){
  int size;
  cout<<"Please enter the size:";
  cin>>size;
  Circular c;
  c.Q(size);
  
  c.Enqueue(20);
  c.Enqueue(30);
  c.Enqueue(50);

  c.Display();
  cout<<"Dequeues Value is"<<c.Dequeue();
  
  return 0;
}