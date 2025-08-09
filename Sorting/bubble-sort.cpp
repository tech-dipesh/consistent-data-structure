#include <iostream>
using namespace std;
class BinaryTree{
   public:
   void Sorting(int A[], int n){
         for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
               if(A[j]>A[j+1])
                  swap(A[j], A[j+1]);
            }
         }


         void isSorted(int A[], int n){
            int checkingSortation;
             for(int i=0;i<n;i++){
               checkingSortation=0;
            for(int j=0;j<n-i-1;j++){
               if(A[j]>A[j+1]){
                  swap(A[j], A[j+1]);
                  checkingSortation=1;
            }
         }
         if(checkingSortation====0){
            cout<<"Bubble sort is already sorted no nneed more checking";
            break;
      }
             }
         }


   };
};
int main(){
 BinaryTree b;
   int A[]={5, 19, 12, 9, 14};
   int n=5;
   b.Sorting(A[], n);
   b.isSorted(A[], n);

   // printing the sorted algorithm:
   for(int i=0;i<n;i++)
      cout<<A[i];
return 0;
}