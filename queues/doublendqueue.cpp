#include <iostream>

using namespace std;

class DEQueue{
  private:
  int size;
  int front;
  int rear;
  int *Q;
  public:
  DEQueue():front(0), rear(0), {
    new int[size];
  }
  ~DEQueue(){delete [] *Q};
  // Checking is queue is full or empty:
  void isFull(int rear){
    if(rear==size-1)cout<<"Queue is Full";
    return;
  }
  void isEmpty(int front, int rear){
    if(front==rear){
        cout<<"Queue is Empty";
        return;
    }
  }

  void frontEnqueue(int x){
    
  }
  int frontDequeue(){}
  void rearEnqueue(int x){}
  int rearDequeue(){}
  void Display(){

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