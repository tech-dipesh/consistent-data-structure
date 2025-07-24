#include <iostream>
#include <stack>
class Stack{
  private:
  int size;
  int front;
  int rear;
  int *Q;
  public:
  Stack(int size=10):front(-1), rear(-1){
      Q=new int[size];
  }
  ~Stack(){
    delete [] Q;
  }
  
};


int main(){
  
  return 0;
}
