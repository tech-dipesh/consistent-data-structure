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
  void Enqueue(){
    
  }
  int Dequeue(int x){

  }

  void isFull(){
    if(rear+1==size)cout<<"Queue is full";
  }
  void isEmpty(){
    if(front==rear)cout<<"Queue is Empty";
  }
};

int main(){
  int size;
  cout<<"Please enter the size:";
  cin>>size;
  Circular c;

  return 0;
}