#include <iostream>
using namespace std;
// bool 
int main(){
  int A[8]={2, 6, -4, 19, 22, -2, 33, 38};
  int i=0, j=8;
  while(i<j){
  while(A[i]>0){i++;}
  while(A[j]>=0){j--;}
  if(A[j]){
    int temp=A[i];
    A[i]=A[j];
    A[j]=temp;
  }
}
// cout<<
for(int i=0;i<8;i++){
  cout<<A[i]<<" ";
}
cout<<"hello";
return 0;
}