#include <iostream>
using namespace std;
int main(){
  int array[10]={5, 9, 10, 29, 23, 98, 45, 98, 52, 49};
  int l=10;
  int sum=0;
  for(int i=0;i<l;i++){
    sum+=array[i];
  }
int avg=sum/l;
cout<<avg;
return 0;
}