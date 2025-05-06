void count(int n){
  static int d=1;
  cout<<n;
  cout<<d;
  d++;
  if(n>1) count(n-1);
  cout<<d;
}
#include <iostream>
using namespace std;
int main(){
    // count(33);
cout<<count(33);
return 0;
}