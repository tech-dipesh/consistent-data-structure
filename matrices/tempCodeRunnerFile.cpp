#include <iostream>
using namespace std;

int upperTriangular(int *A, int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i<=j){
      // int output=[(k-1) A-(k-2)(k-1)/2]+(l-k);
      cout<<[j*(j-1)/2]+i-1;
      }
      else{
        cout<"0";
      }
    }
    cout<<endl;
  }
}
int main(){
   cout<"welcome to the upper triagular matrix."<<endl;
   int n;
   cin>>n;
   cout<<"enter the inside elements";
  //  int *A, n, i, j, x;
  int size=n*(n+1)/2;
  int *A=new int[size]; 
  cout<<"you have to print"<<size;
  for(int i=0;i<size;i++){
    cin>>A[i];
  }
  upperTriangular(A, n);
return 0;
}