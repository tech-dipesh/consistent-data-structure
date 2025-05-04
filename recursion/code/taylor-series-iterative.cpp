#include <iostream>
double taylorloop(int x, int n){
  double total=1;
  int i;
  double num=1;
  double den=1;
  for(int i=1;i<=n;i++){
    num*=x;
    den*=i;
    total+=num/den;
  }
  return total;
}
using namespace std;
int main(){
    
cout<<taylorloop(1, 10);
return 0;
}