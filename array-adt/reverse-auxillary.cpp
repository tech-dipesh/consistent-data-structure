
#include <iostream>
using namespace std;
void reverse(int array[], int l, int B[]){
  // reverse in a b element;
  
  for(int i=l-1, j=0;i>0;i--, j++){
    B[j]=array[i];
  }
  for(int i=0;i<l;i++){
    array[i]=B[i];
  }
  // return array;
}
int main(){
   int array[6]={2, 98, 28, 52, 75, 25};
   int B[6];
   int l=6; 
reverse(array, l, B);
cout<<"reverse a array";
for(int i=0;i<l;i++){
  cout<<array[i]<<" ";
}
return 0;
}