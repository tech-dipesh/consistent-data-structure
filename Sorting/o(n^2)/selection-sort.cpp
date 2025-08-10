// #include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Selection{
  public:
  void Sorting(int A[], int n){
    int i, j, k;
    for(i=0;i<n-1;i++){
      for(j=k=i;j<n;j++){
        if(A[j]<A[k]) k=j;
      }
      swap(A[i], A[k]);
    }
  }
  // printing the selection sort:
  void Display(int A[], int n){
    for(int i=0;i<n;i++)
      cout<<A[i]<<" ";
  }
};
int main(){
    Selection s;
    int A[]={31, 82, 29, 24, 11, 42, 61, 92, 6, 52, 98, 68, 9, 13, 4, 15, 56, 64, 21, 35, 46, 74, 85, 37, 88};
    int n=25;
    s.Display(A, n);
    s.Sorting(A, n);
    cout<<endl<<"After sorting"<<endl;
    s.Display(A, n);
return 0;
}