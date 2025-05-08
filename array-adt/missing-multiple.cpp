#include <iostream>
#include <vector>
using namespace std;
int main(){
  int A[13]={19, 20, 22, 25, 28, 29, 30, 31, 32, 33, 35, 36, 38};
  int n=13, l=19, h=38;
  int different=l-0;
  for(int i=0;i<n;i++){
    if(A[i]-i!=different){
      while(different<A[i]-i){
        int output=i+different;
        // cout<i+different;
        cout<<output<<" ";
        different++;
      }
    }
  }
return 0;
} 