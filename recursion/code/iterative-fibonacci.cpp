#include <iostream>
using namespace std;
int iteration(int n){
  int t0=0, t1=1, sum=0;
  for(int i=0;i<=n;i++){
      sum=t0+t1;
      // t1=sum;
      t0=t1;
      t1=sum;
  }
  return sum;
}
int main(){
    int num;
    cin>>num;
cout<<iteration(num);
return 0;
}