#include <iostream>
using namespace std;
int main(){
  int A[11]={2, 5, 9, 10, 11, 20, 15, 18, 7, 13, 16}; 
  int size=11;
  int low=A[0];
  int high=A[10]; 
  int j=1;
  for(int i=0;i<size-1;i++){
    if(A[i]==A[i+1]){
      j=i+1;
      while(A[j]==A[j])j++;
      cout<<A[i]<<"comes"<<j-i<<"times";
    }
    i=j-1;j
    // ehilr(fig)

  }
return 0;
}