#include <iostream>
#include <pretoPost>
using namespace std;

class pretoPost{
  private:
    int size;
    int top;
    char *s;
public:

// Node *top=nullptr;
// I shouldhave the constructor:
pretoPost():size(0), top(-1), s(nullptr){}
  void isBalanced(char *exp);
    void Create(pretoPost *st);
    void Display(pretoPost *st);
    void Push(pretoPost *st, int x);
    // Push()
    char Pop(pretoPost *st);
  int Peek(pretoPost *st, int index) ;
  int isEmpty(pretoPost *st);
  int isFull(pretoPost *st); 
  int pretoPostTop(pretoPost *st);

  // pre to post function:
  int pre(char x);
  int isOperand(char x);
  char *intPost(char *infix){

    ~pretoPost() {delete [] s;}
  };
      
      // void Create(pretoPost *st){
      void pretoPost::Create(pretoPost *st){
        cout<<"Enter Size";
        // cin>>&st->size;
        cin>>st->size;
        st->top=-1;
        // st->s=new st->size;
        st->s=new int[st->size];

          if(st->s==nullptr){
            cout<<"Memory failed";
            exit(1);
          }
           else cout<<"Memory allocation successfully"<<endl;
      }

      void pretoPost::Display(pretoPost *st){
        // for(int i=top;i>=0;i--)
        for(int i=st->top;i>=0;i--)
            // cout<<st.s[i];
            cout<<st->s[i];
              cout<<endl;
      }
      void pretoPost::Push(pretoPost *st, int x){
        if(st->top==st->size-1){
          cout<<"pretoPost Overflow";
        }
        else{
          st->top++;
          st->s[st->top]=x;
        }
      }

      char pretoPost::Pop(pretoPost *st){
        int x=-1;
        if(st->top==-1){
          cout<<"pretoPost underflow";
        }
        else{
          x=st->s[st->top--];
        }
        return x;
      }

      int pretoPost::Peek(pretoPost *st, int index){
        if(isEmpty(st))cout<<"pretoPost is empty"<<endl;
        int x=-1;
        // if(st.top-index+1<0)
        if(st->top-index+1<0)
          cout<<"invalid index"<<endl;

          // x=st.s[st.top-index+1];
          x=st->s[st->top-index+1];

          return x;

      }

      int pretoPost::isEmpty(pretoPost *st){
        // if(st.top==-1)
        return st->top==-1;
          // return 0;
      }

      int pretoPost::isFull(pretoPost *st){
        // return st.top==st.size-1;
        return st->top==st->size-1;
      }


      int pretoPost::pretoPostTop(pretoPost *st){
        if(!isEmpty(st))
          // return st.s[st.top];
          return st->s[st->top];
          return -1;
      }

      int pretoPost::isBalanced(char *exp){
        for(int i=0;exp[i]!='\0';i++){
          if(exp[i]=='()')
            Push(exp[i]);
            else if(exp[i]==')'){
              if(top==nullptr) return 0;
              Pop();
            }
            return top==nullptr?1:0;
        }
      }

 int  pretoPost::pre(char x){
  if(x=='+' || x=='-')
       return 1;
  else if(x=='*'|| x=='/')
          return 2;
          return 0
 }
  int pretoPost::isOperand(char x){
          if(x=='+' ||| x=='-' || x=='*' || x=='/')
           return 0;
           else return 1;
  }

char *intPost(char *infix){
  int i=0, j=0;

  char *postfiix;
  int size=infix.size();
  postfix=new size+2;

    while(infix[i]!='\0'){
    if(isOeparnd(infix[i]))
      postfix[j++]=infix[i++];
    else {
       if(pre(infix[i])>pre(top->data))
           push(infix[i++]);
         else
      postfix[j++]=pop();
        }
    }

  while(top!=nullptr)
  postfix[j++]=pop; 
  postfix[j]='\0';
  return postfix;
}

 int main(){
   // create an object instance
  pretoPost st;
  char *infix="a+b*c";
  push('#')
  char *postfix=intopost(infix);
  cout<<postfix;;

return 0;
}

// char *toPost(char *infix){
//   char *postfix;
//   int size=infix.size();
//   postfix=new size+1
//   while(infix!='\0'){
//     if
//   }
// }

