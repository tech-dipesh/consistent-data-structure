#include <iostream>
using namespace std;
int main(){
  int array[6]={2, 98, 28, 52, 75, 25};
  int l=6;
  for(int i=0, j=l-1;i<j;i++, j--){
    int temp=array[i];
    array[i]=array[j];
    array[j]=temp;

  }
  cout<<array;
return 0;
}