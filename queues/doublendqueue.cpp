#include <iostream>

using namespace std;

class DEQueue{
  private:
  int size;
  int front;
  int rear;
  int *Q;
  public:
  // DEQueue():front(0), rear(0) {
  DEQueue(int size=10):front(0), rear(0) {
    new int[size];
  }
  // ~DEQueue(){delete [] *Q};
  ~DEQueue(){delete [] Q;};
  // Checking is queue is full or empty:
  bool isFull(){
    // if(rear==size-1)cout<<"Queue is Full";
    // return;
    return rear==size-1;
  }
  // bool isEmpty(int front, int rear){
  bool isEmpty(){
    // if(front==rear){
    //     cout<<"Queue is Empty";
    //     return;
    // }
    return front==rear;
  }

  void frontEnqueue(int x){
    // if(isEmpty()) return;
    if(front==-1) {
      cout<<"Queue is Full";
      return;
     }
      else{
      Q[front]=x;
      front--;
    }
  }

  int frontDequeue(){
    int x=-1;
    if(isEmpty())
      cout<<"Dequeus is is underflow, no value";
      else{
        x=Q[front];
        front++;
      }
      return x;
  }

  void rearEnqueue(int x){
    if(isFull())cout<<"Dequeu is overflow"<<endl;
    else{
      rear++;
      Q[rear]=x;
    }
  }

  int rearDequeue(){
    int x=-1;
    if(rear==-1)
      cout<<"DEqueue underflow"<<endl;
      else{
        x=Q[rear];
        rear--;
      }
      return x;
  }
  void Display(){
    for(int i=front+1;i<=rear;i++){
      cout<<Q[i]<<flush;
      if(i<rear)
        cout<<" <- "<<flush;
    }
    cout<<endl;
  }
};

int main(){
  DEQueue d;

  d.rearEnqueue(10);
  d.rearEnqueue(40);
  d.rearEnqueue(50);
  d.rearEnqueue(60);
  cout<<"Now Remove from rear site"<<endl;
  d.rearDequeue();
  d.rearDequeue();

  cout<<endl<<"Now Add from rear site:"<<endl;
  d.frontEnqueue(70);
  d.frontEnqueue(80);
  d.frontEnqueue(90);
  cout<<endl<<"Now remove from front site:"<<endl;
  d.frontDequeue();
  d.frontDequeue();
  cout<<endl<<"Now display a DEqueue"<<endl;
  d.Display();
  return 0;
}