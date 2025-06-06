//i'm unable to work on the codng due to my laptop issue.
//Worst days of my life i'm unable to code properly on my laptop due to laptop issue.
#include <iostream>
using namespace std;

struct Element{
   int i;
   int j;
   int x;
};

struct Sparse {
   int m;
   int n;
   int num;
   struct Element *El;

};

void Create( Sparse *s){
   cout<<"Enter dimensions";
   cin>>s->m>>s->n;
   cout<<"Enter no. of non zero";
   cin>>s->num;
   s->El=new Element[s->num];
   cout<<"Enter non zero elements";
   for(int i=0;i<s->num;i++){
      cin>>s->El[i].i>>s->El[i].j>>s->El[i].x;
   }
}
void Display( Sparse s){
   int i, j, k=0;
   for(int i=0;i<s.m;i++){
      for(int j=0;j<s.n;j++){
         if(k<s.num &&i==s.El[k].i && j==s.El[k].j) 
         cout<<s.El[k++].x;
      else 
         cout<<"0 ";   
      }
      cout<<endl;
   }
}
int main(){
    Sparse S;
   Create(&S);  
   Display(S);
   return 0;
}