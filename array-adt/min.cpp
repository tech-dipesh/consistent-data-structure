#include <iostream>
using namespace std;
int main(){
  int array[10]={5w5, 9, 10, 29, 23, 98, 45, 98, 52, 49};
  int min=array[0];
  for(int i=0;i<10;i++){
    if(array[i]<min){
      min=array[i];
    }
  }
cout<<min;
return 0;
}