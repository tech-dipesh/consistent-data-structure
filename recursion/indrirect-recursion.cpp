#include <iostream>
using namespace std;

void A(int n){
  if(n>0) {
    cout<<n;
     B(n-1);
  }
  }
  void B(int n){
    if(n>0){
      cout<<n;
      A(n-1);
  }
}

int main(){
    A(5);
return 0;
}