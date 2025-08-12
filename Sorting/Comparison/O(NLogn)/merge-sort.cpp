#include <iostream>
using namespace std;
class Merging{
  public:
  void MergeSort(int A[], int n){

  }
  void Display(int A[], int n){
    // for(int n:A)
    for(int i=0;i<n;i++)
      cout<<A[i]<<" ";
  }
};

int main(){
 Merging m;
 int S[]={31, 82, 29, 24, 11, 42, 61, 92, 6, 52, 98, 68, 9, 13, 4, 15, 56, 64, 21, 35, 46, 74, 85, 37, 88};
 int n=25;
//  before printign the value:
cout<<"Displaying before element";
 m.Display(S, n);

 m.MergeSort(S, n);
 
 //  merging operationg of the merge sort:
 cout<<"Displaying after sorting";
  m.Display(S, n);

return 0;
}