#include <iostream>
using namespace std;
double taylor(int x, int n){
  static double p=1, f=1;
  double store;
  if(n==0){
    return 1;
  }
  // else{
    store=taylor(x, n-1);
    p=p*x;
    f=f*n;
    return store+p/f;
  // }
}
int main(){
  double output= taylor(4, 15); 
cout<<output;
return 0;
}