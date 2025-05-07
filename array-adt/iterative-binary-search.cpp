#include <iostream>
using namespace std;
int main(){
  int arr[10]={2, 8, 13, 19, 23, 29, 30, 39, 43, 50};
  int key=39;
  int length=10;
  int low=0;
  int high=length-1;
  bool found=false;
  while(low<=high){
    int mid=(low+high)/2;
    if(key==arr[mid]){
      cout<<"Element found on index "<<mid;
      found=true;
      break;
    }
    else if(key>arr[mid]){
      low=mid+1;
    }
    else if(key<arr[mid]){
      high=mid-1;
    }
  }
  if(!found){
  cout<<"key is not found";
  }
  // cout<<"key is not found";
return 0;
}