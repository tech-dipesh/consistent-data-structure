#include <iostream>
using namespace std;
int taylor(int n, int x){
  int s=1;
  for(;n>0;n--){
    s=1+n/n*s;
    return s;
  }
  // return 0;
}
int main(){
cout<<taylor(5, 8)
return 0;
}