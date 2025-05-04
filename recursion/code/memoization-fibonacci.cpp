#include <iostream>
using namespace std;

int G[10];
int fib(int input){
  if(input<=1){
G[input]=input;
    return input;
  }
  else{
    if(G[input-2]==-1) 
    G[input-2]=fib(input-2);
  if(G[input-1]==-1)
    G[input-1]=fib(input-1);
  G[input]=fib[input-2]+fib[input-1];
  return fib[input-2]+fib[input-1]; 
}
}

int main(){
   int v;
   cin>>v;
  //  for(int )
  for(int i=0;i<10;i++){
    G[i]=-1;
  }
cout<<fib(v);
return 0;
}