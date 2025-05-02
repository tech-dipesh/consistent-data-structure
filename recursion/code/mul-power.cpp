#include <iostream>
using namespace std;
int raw(int m, int n){
  if(n==0) return 1;
  if(n%2==0){
    return raw(m, n/2);
  }
  else
  return m*raw(m*m, (n-1)/2)*m;
}
int main(){
   int output=raw(3, 8); 
cout<<output;
return 0;
}