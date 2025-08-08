#include <iostream>
using namespace std;
class Heap{
  public:
  void Insert(int Heap[], int n){
    int i=n, temp;
    temp=Heap[i];
    while(i>1 && temp>Heap[i/2]){
      Heap[i]=Heap[i/2];
      i/=2;
    }
    Heap[i]=temp;
  }

  int Delete(int Heap[], int n){
    int x=Heap[n];
    // this will only delete the root node:
    int val=Heap[1];
    Heap[1]=Heap[n];
    Heap[n]=val;
    int i=1;
    int j=i*2;
    while(j<n-1){
      if(Heap[j+1]>Heap[j])
          j+=1;
          if(Heap[i]<Heap[j]){
           int temp=Heap[i];
          Heap[i]=Heap[j];
          Heap[j]=temp;      
          // moving to child pointer:
          i=j;
          j=2*j;
         }
         else break;
    }
    return val;
  }
};

int main(){
  Heap h;
   int Heap[]={5, 8, 13, 5, 7, 9, 4, 19, 20}; 
  //  insertion with for loop
  for(int i=2;i<=8;i++)
    h.Insert(Heap, i); 

    // delete operation:
    cout<<"Deleted value of:"<<h.Delete(Heap, 9)<<endl;
    // Delete one more element
    cout<<"Deleted another value of:"<<h.Delete(Heap, 8)<<endl;
    // printing out the value:
    for(int i=1;i<=8;i++){
      cout<<Heap[i]<<" ";
    }
return 0;
}