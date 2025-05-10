#include <iostream>
using namespace std;
int main(){
   int A[11]={2, 5, 9, 10, 11, 20, 15, 18, 7, 13, 16}; 
  int size=11;
  int low=A[0];
  int high=A[10];
  for(int i=0;i<size;i++){
    if(low>A[i]){
      low=A[i];
    }
    if(high<A[i]){
      high=A[i];
    }
  }
  int H[high]={0};
  for(int i=0;i<size;i++){
    H[A[i]]++;
  }
  for(int i=low;i<=high;i++){
    if(H[i]==0) cout<<"missing elements are "<<i<<" ";
  }
return 0;
}