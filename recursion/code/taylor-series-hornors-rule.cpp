#include <iostream>
using namespace std;
double taylor(int x, int n){
  // static double p=1, f=1;
  // double store;
  static double  sum=1;
  if(n==0){
    return sum;
  }
  // else{
  //   store=taylor(x, n-1);
  //   p=p*x;
  //   f=f*n;
  //   return store+p/f;
  // // }
  sum=1+(x/n)*sum;
  return taylor(x, n-1);
}
int main(){
  double output= taylor(1, 10); 
cout<<output;
return 0;
}