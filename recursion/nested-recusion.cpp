#include <iostream>
using namespace std;
int fun(int n){
  if(n>100){
   return n-10;
  }
  // else{
   return fun(fun(n+12));
  // }
}
int main(){
  //  fun(95); 

  int r=fun(95);
  // cout<<fun(95);
  cout<<r;
  cout<<"check";
return 0;
}