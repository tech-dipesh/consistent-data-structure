#include <iostream>
using namespace std;

int binary(int arr[10], int length, int low, int high, int key){
  if(low<=high){
    int mid=(low+high)/2;
    if(key==arr[mid])
      return mid;
    else if(key<arr[mid])
      return binary(arr, length, low, mid-1, key);
    else 
    return binary(arr, length, mid+1, high, key);
  }
  return -1;
}
int main(){
    int length=10;
    int arr[10]={2, 8, 13, 19, 23, 29, 30, 39, 43, 50};
    int key=43;
    int low=0;
    int high=length;

cout<<binary(arr, length, low, high, key);
if(binary){
  cout<<endl<<"key is found";
}
else{
  cout<<"key is not found";
}
return 0;
}