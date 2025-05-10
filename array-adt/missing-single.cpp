#include <iostream>
using namespace std;
int main(){
   int arr[10]={1, 2, 3, 4, 5, 7, 8, 9, 10, 11};
   int size=10;
   bool missing=false, output;
   for(int i=0;i<size-1;i++){
      if(arr[i]!=arr[i+1]-1){
        cout<<"missing element on the"<<arr[i]<<"and"<<arr[i+1];
        break;
      }
   } 

cout<<"no missing element is found";
return 0;
} 