#include <iostream>
using namespace std;

bool hastable(string name){
  int H[26]={};
  for(int i=0;name[i]!='\0';i++){
    // if(H[])
    H[name[i]-97]+=1;
  }
  for(int i=0;i<26;i++){
    if(H[i]>1){
      // printf("%d", i+97);
      // cout<< i+97;
      cout<< "Duplicate character:"<<char(i+'a')<<endl;
      return true;
      // return H[i];
      // cout << i+97;
    }
  }
  return false;
}


int main(){
  // string name= "DuplicateValue";
  string name;
  cin>>name;

    if(hastable(name)){
      // printf("Yes the value is string");
      cout<<"Yes the value have the duplicate";
    }
    else{
      cout<< "No the value is not having a duplicate";
    }
return 0;
}