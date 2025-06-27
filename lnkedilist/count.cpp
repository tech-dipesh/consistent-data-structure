#include <iostream>
// #include <bits/stdc++.h>
using namespace std;
struct Node{
  int n;
  Node* next;
}

int LinkedList(int num){
  
  if(num==0) return 0;
  return LinkedList(num-1)-num;
}

int main(){
    
cout<<LinkedList(45);
return 0;
}