#include <iostream>
using namespace std;
struct Array{
  int A[10];
  int size;
  int length;
};
  
void Displayarray(struct Array arr){
  int i;
  for(int i=0;i<arr.length;i++){
    cout<<arr.A[i]<<" ";
  }
}
void Append(struct Array *arr, int x){
  if(arr->length<arr->size){
    arr->A[arr->length++]=x;
  }
}

void Insert (struct Arry *arr, int Index, int x){
  int i;
  if(index>=0 && index <=arr->length){
    for(i=arr->length;i>index;i--){
      // arr->A[i]=arr->A[i-1];
      arr->A[i]=arr->A[i-1]
    }
      arr->A[index]=x;
      arr->length++;
  }
}
int main(){
    struct Array arr={{2, 3, 4, 5, 6}, 20, 5};
    Insert (&arr, 5, 10);
    // Append(&arr, 10);
    Displayarray(arr);
// cout<<
return 0;
}