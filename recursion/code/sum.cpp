
#include <iostream>
using namespace std;
int sum(int n){
  if(n<0) return 0;
  return sum(n-1)+n;
}

int main(){
  //  sum(10); 
  int output=sum(10);
  cout<<output;
return 0;
}