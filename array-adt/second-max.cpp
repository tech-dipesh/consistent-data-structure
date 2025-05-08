#include <iostream>
using namespace std;
int main(){
  int array[10]={5, 9, 10, 29, 23, 96, 45, 98, 52, 49};
  int max=array[0];
  int smax=array[0];
  for(int i=0;i<10;i++){
    if(max<array[i]){
      max=array[i];
    }
if(smax<array[i] && smax<max){
  smax=array[i];
}
  }
cout<<smax;
return 0;
}