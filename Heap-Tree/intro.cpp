#include <iostream>
using namespace std;
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
  Heap[1]=Heap[n];
  int i=1;
  int j=i*2;
  while(j<n-1){
    if(Heap[j+1]>Heap[j])
        j+=1;
        if(Heap[i]<Heap[j]){
          temp=Heap[i];
        Heap[i]=Heap[j];
        Heap[j]=temp;      
        // moving to child pointer:
        i=j;
        j=2*j;
       }
       else break;
  }
}

int main(){
   int Heap[]={5, 8, 13, 5, 7, 9, 4, 19, 20}; 
  //  insertion with for loop
  for(int i=2;i<=8;i++)
    Insert(Heap, i); 

    for(int i=1;i<=8;i++){
      cout<<Heap[i]<<" ";
    }
return 0;
}