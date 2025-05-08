#include <iostream>
using namespace std;

int main(){
  int A[8]={2, 6, 12, 19, 22, 29, 33, 38};
  int B[5]={19, 22, 92, 52, 32};
  int al=8, bl=3;
  int i=0, j=0, k=0;
  int l=8;
  int cl=al+bl;
  int C[cl];
  while(i<al && j<bl){
  if(A[i]<B[j]){
    C[k++]=A[i++];
  }
    else C[k++]=B[j++];
}
//this is for copy all left elements
while(i<al){
  C[k++]=A[i++];
}
while(j<bl){
  C[k++]=B[j++];
}
// based on the ai it is not required
// for(;i<al;i++){
//   C[k++]=A[i];
//   for(;j<bl;j++){
//     C[k++]=B[j];
//   }
// }
// // cout<<
// for(int i=0;i<11;i++){
//   cout<<C[i]<<" ";
// }
for(int i=0;i<cl;i++){
  cout<<C[i]<<" ";
}
return 0;
}