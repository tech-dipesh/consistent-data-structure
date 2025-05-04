#include <iostream>
using namespace std;

int fib(int input){
  if(input<=1)
  // {
    return input;
  // }
  return fib(input-2)+fib(input-1);
}

int main(){
   int v;
   cin>>v;
cout<<fib(5);
return 0;
}