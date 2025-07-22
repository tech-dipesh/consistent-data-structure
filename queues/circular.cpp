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
  // Circular(int sz):(sz), front(-1), rear(-1){int Q[size];}
  // the front and rear should start from 0 not -1, also on the sz i should define a size.;
  Circular(int sz):size(sz), front(0), rear(0){Q= new int[size];}
  ~Circular(){delete [] Q;}
  void Enqueue(int x){
    if(isFull()) {
      cout<<"Enqueue is Full:"<<endl;
      return;
    }
    else{
      // Q[size]=;
      rear=(rear+1)%size;
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

  bool isFull(){
    // if(rear+1==size)cout<<"Queue is full";
    return (rear+1)%size==front;
  }
  bool isEmpty(){
    // if(front==rear)cout<<"Queue is Empty";
    return front==rear;
  }

  void Display(){
    if(isEmpty()){
      cout<<"Queue is empty";
    }
    int i=front+1;
    // for(int i=(i+1)%size;i!=(rear+1)%size;i++){
    while(true){
      cout<<Q[i]<<" ";
      // for breaking a condition.
      if(i==rear) break;
      i=(i+1)%size;
    }
    cout<<endl;
  }
};

int main(){
  // int size;
  // cout<<"Please enter the size:";
  // cin>>size;
  // Circular c;
  // Circular c(size);
  Circular c(3);
  // c.Q(size);
  
  c.Enqueue(20);
  c.Enqueue(30);
  c.Enqueue(50);

  c.Display();
  cout<<"Dequeues Value is: "<<c.Dequeue();
  
  return 0;
}