#include <iostream>
using namespace std;
int raw(int m, int n){
  if(n==0) return 1;
  return raw(m, n-1)*m;
}
int main(){
   int output=raw(3, 5); 
cout<<output;
return 0;
}