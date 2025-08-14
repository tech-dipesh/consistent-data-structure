#include <iostream>
using namespace std;
class Merging{
   public:
   void MergeTwo(int A[], int B[], int asize, int bsize, int C[]){
      int i, j, k;
      i=j=k=0;
      while(i<asize && j<bsize){
         if(A[i]<B[j])C[k++]=A[i++];
         else C[k++]=B[j++];
      }
      for(;i<asize;i++)C[k++]=A[i];
      for(;j<bsize;j++)C[k++]=B[j];
   }

   // printin the value:
   void Display(int C[], int n){
      for(int i=0;i<n;i++)
         cout<<C[i]<<" ";
   }
};
int main(){

   int A[] ={2, 9, 19, 25, 31, 46};
   int B[] ={4, 7, 13, 21, 29, 35, 39};
   // int m=A.length();
   int m=6;
   int n=7;
   // int n=B.length();
   int *C=new int[m+n];
   // int Csize=c.length();
   int Csize=m+n;
   Merging mm;
   mm.MergeTwo(A, B, m, n, C);
   // printing the value of third variable:
   mm.Display(C, Csize);
return 0;
}