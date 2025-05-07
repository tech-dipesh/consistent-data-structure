#include <iostream>
using namespace std;
int main(){
   int arr[5]={2, 8, 9, 20, 19};
   int length=8;
   int key=20;
   int found, index;
   for(int i=0;i<length;i++){
      if(key==arr[i]){
        int temp=arr[i];
        arr[i]=arr[0];
        arr[0]=temp;
        found=1;
        index=i;
      }
   }
   if(found){
    cout<<"key is found on index "<<endl<<index;
    // cout<<arr[];
   }
   else{
   cout<<"key is not found";
   }
  // for(int i=)
// cout<<
return 0;
}