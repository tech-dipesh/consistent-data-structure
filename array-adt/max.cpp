#include <iostream>
using namespace std;
int main(){
  int array[10]={5, 9, 10, 29, 23, 98, 45, 98, 52, 49};
  int max=array[0];
  for(int i=0;i<10;i++){
    if(max<array[i]){
      max=array[i];
    }
  }
cout<<max;
return 0;
}