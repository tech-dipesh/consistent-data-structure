#include <iostream>
using namespace std;
void fun(int n){
  // if(n>0){
  //   fun(n-1);
  // }
  int i=1;
  while(i<=n){
    cout<<i<<endl;
    i++;
  }
  fun(n);
}
// cout<<n<<endl;

int main(){
  int n=5;  
  fun(n);
// cout<<
return 0;
}