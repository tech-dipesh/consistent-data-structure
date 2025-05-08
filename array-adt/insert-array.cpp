#include <iostream>
using namespace std;
int main(){
   int A[8]={2, 6, 12, 19, 22, 29, 33, 38};
   int x=18;
  int l=8;
  int i=l-1;
  while(A[i]>x){
    A[i+1]=A[i];
    i--;
  }
  A[i+1]=x;
  int value;
  for(int i=0;i<l+1;i++){
    value=A[i];
    cout<<value<<" ";
  }
// cout<<A[];
return 0;
}