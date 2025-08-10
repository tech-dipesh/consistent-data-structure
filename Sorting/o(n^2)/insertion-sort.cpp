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
};
int main(){
    Insertion i;
    int S[]={2, 29, 43, 29, 21, 8};
    int n=6;
    // i.Sorting(S, n);
    i.Sorting(S, n);
// printing the value:
    for(int i=0;i<n;i++)
      cout<<S[i]<<" ";
return 0;
}