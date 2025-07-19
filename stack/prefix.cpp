
#include <iostream>
using namespace std;
struct Node{
  int data;
  Node *next;
};

Node *top=nullptr;

class LinkedList{
      public:
        void Push(int x);
        int Pop();
        void Display();
  };
    
 void LinkedList::Push(int x){
  Node *t=new Node();
  if(t==nullptr)
      cout<<"stack is full"<<endl;
     else{
       t->data=x;
      t->next=top;
      top=t;
     }
 }


 int LinkedList::Pop(){
  Node *t;
    int x=-1;
  if(top==nullptr)
      cout<<"STack is empty";
      else{
        t=top;
        top=top->next;
        x=t->data;
        delete t;
      }
      return x;
 }
 void LinkedList::Display(){
  Node *p;
  p=top;
  while(p){
    cout<<p->data<<"-";
    p=p->next;
  }
    cout<<endl;
 }
 

 int pre(char x){
  if(x=='+' || x=='-')
       return 1;
       else if(x=='*'|| x=='\')
          return 2;
          return 0
 }
          int isOeparnd(char x){
          if(x=='+) ||| x=='-' || x=='* || x=='\}
           return 0;
           else return 1;
          

           char *intPost(char *infix){
            int i=0, j=0;
             
            char *postfiix;
            int size=infix.size();
            postfix=new size+1;

            while(infix[i]!='\0'){
              if(isOeparnd(infix[i]))
              postfix[j++]=infix[i++];
              else {
                if(pre(infix[i])>pre(top->data))
                  push(infix[i++]);
                  else{
                    postfix[j++]=pop();
                  }
              }
            }
            while(top!=nullptr){
              postfix[j++]=pop; 
            }
            postfix[j]='\0';
            return postfix
           }
 int main(){
  // create an object instance

  char *infix="a+b*c";
  push('#')
  char *postfix=intopost(infix);
  
  cout<<postfix;;

  char 
  LinkedList stack;
  stack.Push(10);
  stack.Push(20);
  stack.Push(30);

  stack.Display();
  cout<<stack.Pop()<<endl;
return 0;
}

char *toPost(char *infix){
  char *postfix;
  int size=infix.size();
  postfix=new size+1
  while(infix!='\0'){
    if
  }
}

int main(){

}