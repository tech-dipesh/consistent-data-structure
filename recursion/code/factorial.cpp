
#include <iostream>
using namespace std;
int sum(int n){
  // if(n>0) return 0;
  if(n==0) return 1;
  return sum(n-1)*n;
}

int main(){
  //  sum(10); 
  int output=sum(6);
  cout<<output;
return 0;
}