#include <iostream>
using namespace std;

bool anagram(string first, string second){
  int h[26]={0};
  for(int i=0;first[i]!='\0';i++){
    h[first[i]-97]+=1;
  }
  for(int j=0;second[j]!='\0';j++){
    h[second[j]-97]-=1;
    if(h<0){
      cout<<"The number is not a anagram";
      return -1;
      break;
    }  
  }
  cout<<"Yes the number is anagram";
  return 0;
}

int main(){
  string first, second;
  scanf("%s %s", first, second);
   if(anagram(first, second)){
    // printf("yes the number is ")
    cout<<"Yes number is anagram";
   } 
   else{
    // cout<<"No the output is "
    cout<<"Not the output is not a anagram";
   }
// cout<<
return 0;
}