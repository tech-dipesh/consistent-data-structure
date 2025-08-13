#include <iostream>
using namespace std;
class QuickSort{
  public:
  // youtube approach:
//   int Parition(int Arr[], int low, int h){
// int pivot=Arr[low];
// int i=low, j=high;
// while(i<j){
//   while(Arr[i]<=Arr[pivot] && i<=h){
//       i++;
//   }
//   while(Arr[j]>Arr[pivot] && j>=low){
//       j--;
//   }
//   if(i<j)swap(Arr[low], Arr[j]);
// }
//   }


  // abdul bari approach:
 int Parition(int Arr[], int low, int high){
int pivot=Arr[low];
// int i=Arr[low], j=Arr[high];
int i=low, j=high;
// while(i<j){
do{
  do {i++;} while (Arr[i]<=pivot);
  do {j--;} while (Arr[j]>pivot);
  if(i<j)swap(Arr[i], Arr[j]);
} while(i<j);
swap(Arr[low], Arr[j]);
return j;
  }


  //  Recusrive approch:
  void quickVoidSort(int A[], int low, int high){
    if(low<high){
     int j=Parition(A, low, high);
      quickVoidSort(A, low, j);
      quickVoidSort(A, j+1, high);
    }
  }
  

  // printing the sorted element:
  void Display(int A[], int n){
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
  }
};
int main(){
  QuickSort q; 
    int S[]={31, 82, 29, 24, 11, 42, 61, 92, 6, 52, 98, 68, 9, 13, 4, 15, 56, 64, 21, 35, 46, 74, 85, 37, 88};
    int size=25;
    int low=0, high=size;
    cout<<endl<<"before partition:";
    q.Display(S, size);
    q.Parition(S, low, high);
    q.quickVoidSort(S, low, high);
    cout<<endl<<"After printing:";
    q.Display(S, size);
return 0;
}