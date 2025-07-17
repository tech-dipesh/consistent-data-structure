#include <iostream>
using namespace std;

class Stack{
  public:
    int size;
    int top;
    int *s;

    void create(Stack *st);
    void Display();
    Push()
    public:

      
      void create(Stack *st){
        cout<<"Enter Size";
        cin>>&st->size;
        st->top=-1;
        // st->s=new st->size;
        st->s=new [st->size];

      }

      void Display{Stack *t}{
        for(int i=top;i>=0;i--)
            cout<<st.s[i];
              cout<<endl;
      }
      void Push(Stack *st, int x){
        if(st->top==st->size-1){
          cout<,"Stack Overflow";
        }
        else{
          st->top++;
          st->S[st->to[]=x;]
        }
      }

      void pop(Stack *st){
        int x=-1;
        if(st->top==-1){
          coiut<<"Stack underflow"
        }
        else{
          x=st->tS[st->top--];
        }
        return x;
      }

      int peek(Stack st, int index){
        intx=-1;
        if(st.top-index+<0)
          cout<,"invalid index"<<end;

          x=st.s[st.top-index+1];

          return x;

      }

      int isEmpty(stack st){
        if(st.top==-1)
          return 1;
          return 0;
      }

      int isFull(stack st){
        return st.top==st.size-1;
      }
      int stackTop(stack st){
        if(!isEmpty(st))
          return st.s[st.top];
          return -1;
      }
};
int main(){
    Stack st;
  creat(&st);

  push(&st, 10);
  push(&st, 20);
  push(&st, 30);
  push(&st, 40);
  
  cout<<endl<<pop(&st);
  cout<<endl<<peep(st, 1);

  Display(st);
return 0;
}