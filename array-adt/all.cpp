#include <iostream>
using namespace std;
class Array
{
  private:
  int *A;
  int size;
  int length;
  public:
  Array(int sz){
    // size=10;
    size=sz;
    length=0;
    A=new int[10];
  }
  ~Array(){
    delete []A;
    
  }
  void Display();
    void Insert(int index, int x);
    int Delete (int index);
};

void Array::Display(){
  for(int i=0;i<length;i++){
    cout<<A[i]<<" ";
    cout<<endl;
  }
}
void Array::Insert(int index, int x){
  if(index>=0 && index<=length){
    for(int i=length-1;i>=index;i--)
      A[i+1]=A[i];
    A[index]=x;
    length++;
  }
}
int Array::Delete(int index){
  int x=0;
  if(index>=0 && index<length){
    x=A[index];
    for(int i=index;i<length-1;i++)
      A[i]=A[i+1];
      length--;
  } 
  return x;
}

int main(){
  // Array arr[10];
  Array arr(10);
  arr.Insert(0, 5);
  arr.Insert(1, 3);
  arr.Insert(2, 9);
  arr.Display();
  cout<<arr.Delete(0);
  arr.Display();
  return 0;
}