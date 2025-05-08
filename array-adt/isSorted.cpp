#include <iostream>
using namespace std;
// bool 
int main(){
  int A[8]={2, 6, -4, 19, 22, -2, 33, 38};
  int i=0, j=8;
for(int i=0;i<j-1;i++){
  if(A[i]>A[i+1]){
    cout<<"array is not sorted";
    break;
  }
  cout<"array is sorted";
}
return 0;
}