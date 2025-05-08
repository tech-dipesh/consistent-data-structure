#include <iostream>
#include <vector>
using namespace std;
int main(){
   vector <int> arr={1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12};
  //  int size=11, sum=0, last;
  int sum=0, n=12;
   for(int i: arr){
     sum+=i;
    } 
    // int math=last*(size+1)/2;
    int math=n*(n+1)/2;
    // cout<<math<<endl;
  //  cout<<sum;
  int output=math-sum;
cout<<output;
// cout<<"no missing element is found";
return 0;
} 