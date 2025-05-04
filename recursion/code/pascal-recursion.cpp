#include <iostream>
using namespace std;
int fact(int n){
  if(n==0)
  return 1;
return fact(n-1)*n;
}
int nCr(int n, int r){
  if(n>j  r){
    // int no="Please put the correct number";
    return -1;
  }
  int numerator, demorator;
  numerator=fact(n);
  // demorator=fact(r);
  demorator=fact(r)*fact(n-r);
  return numerator/demorator;
}
int main(){
    int result=nCr(6, 8);
    cout<<result;
// cout<<
return 0;
}