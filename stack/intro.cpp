#include <iostream>
using namespace std;

class Stack{
  public:
    int size;
    int top;
    int *s;

    public:
      void create(Stack *st);

      void create(Stack *st){
        cout<<"Enter Size";
        cin>>&st->size;
        st->top=-1;
        st->s=new st->size;

      }

      void Display{}{
        for(int i=top;i>=0;i--){


        }
      }
      void push(Stack *st, int x){
        if(st->top==st->size-1){
          cout<,"Stack Overflow";
        }
        else
      }
};
int main(){
    
cout<<
return 0;
}