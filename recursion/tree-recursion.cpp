#include <iostream>
using namespace std;
void fun(int value){
  if(value>0){
    cout<<value ;
    fun(value-1);
    cout<<value ;
    fun(value-1);
  }
}

int main(){
    int value=5;
    fun(value);
return 0;
}