#include <iostream>
using namespace std;
practice(int n){
  static int i=1;
  if(n>=5) return n;
  n=n+i;
  i++;
  return practice(n);
}
int main(){
   cout<<practice(1); 
// cout<<
return 0;
}