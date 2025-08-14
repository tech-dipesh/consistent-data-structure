#include <iostream>
using namespace std;
class Merging{
   public:
   void MergeTwo(int A[], int B[], int asize, int bsize, int C){
      int i=j=k=0;
      while(i<asize && j<bsize){
         if(A[i]<B[j])C[k++]=A[i++];
         else c[k++]=B[j++];
      }
      for(;i<asize;i++)C[k++]=A[i];
      for(;j<asize;j++)C[k++]=B[j];
   }

   // printin the value:
   void Display(int C, int n){
      for(int i=0;i<n;i++)
         cout<<C[i]<<" ";
   }
};
int main(){

   int A[] ={2, 9, 19, 25, 31 46};
   int B[] ={4, 7, 13, 21, 29, 35, 39};
   int m=6, n=7;
   int C[m+n-1];
   Merging mm;
   mm.MergeTwo(A, B, m, n, C);
   // printing the value of third variable:
   mm.Display(C, m+n);
return 0;
}