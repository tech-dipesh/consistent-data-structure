int fun(int n){
  int x=1,k;
  if(n==1) return x;
  for(int k=1;k<n;++k){
    x=x+fun(k)*fun(n-k);
    return x;
  }
  
}
#include <iostream>
using namespace std;
int main(){
cout<<fun(11);
return 0;
}