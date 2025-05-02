#include <iostream>
using namespace std;
int top(int name){
  if(name>0){
    // return name;
    // top(name-1);
    // return name+(name-1)
    // int o=1;
    // return top(
    // name-1)*o;
    return name+ (name-1);
  }
  return 0;
}

int main(){
   int name;
  //  scanf("%d") 
  cin>>name;
  cout<<top(name);
return 0;
}