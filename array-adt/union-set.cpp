#include <iostream>
using namespace std;
int main(){
  //  int array[10]={5, 9, 10, 29, 23, 98, 45, 98, 52, 49};
  struct Array A={{2, 5, 10, 15, 20}, 10, 5};
  struct Array B={{3, 5, 13, 19, 20, 29}, 10, 5};
  struct Array *C;
  int i=5, j=6, k=i+j;
  int alen=5, blen=6;
  while(i<alen && j<blen){
  if(A[i]<B[j]){
    C[k++]=A[i++];
  }
  if(A[i]==B[j])
    // else C[k++]=B[j++];
  continue;
}
//this is for copy all left elements
while(i<alen){
  C[k++]=A[i++];
}
while(j<blen){
  C[k++]=B[j++];
}
return 0;
}