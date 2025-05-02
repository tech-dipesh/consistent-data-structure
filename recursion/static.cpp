#include <iostream>
using namespace std;
int top(int name){
  static int val=5;
  if(name>0){
    val++;
    return top(name-1)+val;
  }
  return 0;
}

int main(){
   int name;
  cin>>name;
  cout<<top(name);
return 0;
}