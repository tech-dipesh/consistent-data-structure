#include <iostream>
using namespace std;
void hanoi(int n, int a, int b, int c){
  if(n>0){
    hanoi(n-1, a, c, b);
    cout<<"from "<<a<<"to "<<c<<endl;
    hanoi(n-1, b, a, c);
  }
}
int main(){
  //  int hanoi=tower(4, 1, 2, 3); 
  hanoi(4, 1, 2, 3);
  // cout<<hanoi;
// return hanoi;
return 0;
}