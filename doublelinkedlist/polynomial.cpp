// #include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Node
{
  int coeff;
  int exp;
  Node *next;
};

Node *poly=nullptr;
void create(){
  Node *t, *last=nullptr;
  int num;
  cout<<"Please enter number of terms";
  cin>>&num;
  cout<<"Please enter each term with coeff and exp"<<endl;
  for(int i=0;i<num;i++){
   t=new Node();
   cin>>&t->coeff>>&t->exp;
   t->next=nullptr;
   if(poly==nullptr){
    poly=last=t;
   }
   else{
    last->next=t;
    last=t;
   }
  }
}

void Display(Node *p){
   while(p){
    cout<<"*"<<p->coeff<<"+"<<p->exp;
    p=p->next;
   }
   cout<<endl;
}

// due to large number which we have to use a long 
long Evaluation(Node *p, int x){
  long val=0;
  while(p){
    val+=p->coeff*pow(x, p->exp);
    p=p->next;
  }
  return val;
}
int main(){
    create();
  Display(poly);

  // printing evaluation of a umber:
  cout<<Evaluation(poly, 2);
return 0;
}