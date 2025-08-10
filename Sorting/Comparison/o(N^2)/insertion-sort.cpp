#include <iostream>
using namespace std;
class Insertion{
  public:
  void Sorting(int S[], int n){
   for(int i=1;i<n;i++){
     int j=i-1;
     int key=S[i];
      while(j>=0 && S[j]>key){
      // S[j]=S[j+1];
       S[j+1]=S[j];
        j--;
      }
      S[j+1]=key;
      }
  }

  void Display(int S[], int n){
      for(int i=0;i<n;i++)
        cout<<S[i]<<" ";
  }
};
int main(){
    Insertion i;
    // int S[]={2, 29, 43, 29, 21, 8};
   int S[]={31, 82, 29, 24, 11, 42, 61, 92, 6, 52, 98, 68, 9, 13, 4, 15, 56, 64, 21, 35, 46, 74, 85, 37, 88};
   int n=25;
    // i.Sorting(S, n);
    i.Sorting(S, n);
// printing the value:
    i.Display(S, n);
return 0;
}