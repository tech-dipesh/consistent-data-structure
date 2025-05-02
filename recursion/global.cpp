#include <iostream>
using namespace std;
static int vv=2;
int fun (int n){
  if(n>0){
    vv++;
    return fun(n-1)+vv;
  }
  return 0;
}
int main(){
    int r;
    r=fun(4);
    // cout>>r;
    cout<<r;
return 0;
}