#include <iostream>
#include <stack>
using namespace std;

class stack{
  private:
    int size;
    int top;
    char *s;
public:

// Node *top=nullptr;
// I shouldhave the constructor:
stack():size(0), top(-1), s(nullptr){}


  void isBalanced(char *exp);
    void Create(stack *st);
    void Display(stack *st);
    void Push(stack *st, int x);
    // Push()
    char Pop(stack *st);
  int Peek(stack *st, int index) ;
  int isEmpty(stack *st);
  int isFull(stack *st); 
  int stackTop(stack *st);
    ~stack() {delete [] s;}
  };
      
      // void Create(stack *st){
      void stack::Create(stack *st){
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

      void stack::Display(stack *st){
        // for(int i=top;i>=0;i--)
        for(int i=st->top;i>=0;i--)
            // cout<<st.s[i];
            cout<<st->s[i];
              cout<<endl;
      }
      void stack::Push(stack *st, int x){
        if(st->top==st->size-1){
          cout<<"stack Overflow";
        }
        else{
          st->top++;
          st->s[st->top]=x;
        }
      }

      char stack::Pop(stack *st){
        int x=-1;
        if(st->top==-1){
          cout<<"Stack underflow";
        }
        else{
          x=st->s[st->top--];
        }
        return x;
      }

      int stack::Peek(stack *st, int index){
        if(isEmpty(st))cout<<"stack is empty"<<endl;
        int x=-1;
        // if(st.top-index+1<0)
        if(st->top-index+1<0)
          cout<<"invalid index"<<endl;

          // x=st.s[st.top-index+1];
          x=st->s[st->top-index+1];

          return x;

      }

      int stack::isEmpty(stack *st){
        // if(st.top==-1)
        return st->top==-1;
          // return 0;
      }

      int stack::isFull(stack *st){
        // return st.top==st.size-1;
        return st->top==st->size-1;
      }
      int stack::stackTop(stack *st){
        if(!isEmpty(st))
          // return st.s[st.top];
          return st->s[st->top];
          return -1;
      }

      int stack::isBalanced(char *exp){
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

 int  pre(char x){
  if(x=='+' || x=='-')
       return 1;
  else if(x=='*'|| x=='/')
          return 2;
          return 0
 }
  int isOeparnd(char x){
          if(x=='+' ||| x=='-' || x=='* || x=='/'}
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
  stack st;
  // create an object instance

  char *infix="a+b*c";
  push('#')
  char *postfix=intopost(infix);
  
  cout<<postfix;;

  char 
  bodmosInfix stack;
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

