#include <iostream>
using namespace std;

class stack{
  private:
    int size;
    int top;
    int *s;
public:
    void Create(stack *st);
    void Display(stack *st);
    void Push(stack *st, int x);
    // Push()
    int Pop(stack *st);
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
            cout<<"Memory allocation successfully"<<endl;
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

      int stack::Pop(stack *st){
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
      int main(){
    stack st;
  // creat(&st);
  // Create(&st);
  st.Create(&st);

  // push(&st, 10);
  // Push(&st, 20);
  st.Push(&st, 20);
  st.Push(&st, 20);
  st.Push(&st, 30);
  st.Push(&st, 40);
  
  // cout<<endl<<pop(&st);
  cout<<endl;
  cout<<st.Pop(&st);
  // cout<<endl<<peep(st, 1);
  cout<<endl;
  cout<<st.Peek(&st, 1);

  // Display(&st);
  st.Display(&st);
return 0;
}