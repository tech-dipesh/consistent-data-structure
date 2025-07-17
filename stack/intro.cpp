#include <iostream>
using namespace std;

class stack{
  private:
    int size;
    int top;
    int *s;
public:
    void create(stack *st);
    void Display(stack *st);
    void push(stack *st);
    // Push()
    int Pop(stack *st);
  int peek(stack *st) ;
  int isEmpty(stack *st);
  int isfull(stack *st); 
  int stackTop(stack *st);
    ~stack() {delete [] s;}
  };
      
      void create(stack *st){
        cout<<"Enter Size";
        cin>>&st->size;
        st->top=-1;
        // st->s=new st->size;
        st->s=new [st->size];

      }

      void Display{stack *t}{
        for(int i=top;i>=0;i--)
            cout<<st.s[i];
              cout<<endl;
      }
      void Push(stack *st, int x){
        if(st->top==st->size-1){
          cout<<"stack Overflow";
        }
        else{
          st->top++;
          st->s[st->top]=x;
        }
      }

      void pop(stack *st){
        int x=-1;
        if(st->top==-1){
          cout<<"Stack underflow"
        }
        else{
          x=st->s[st->top--];
        }
        return x;
      }

      int peek(stack st, int index){
        intx=-1;
        if(st.top-index+1<0)
          cout<<"invalid index"<<end;

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
      int main(){
    stack st;
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