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
int main(){
   int Heap[]={5, 8, 13, 5, 7, 9, 4}; 
   Insert(Heap, 2);
   Insert(Heap, 3);
   Insert(Heap, 4);
   Insert(Heap, 5);
return 0;
}