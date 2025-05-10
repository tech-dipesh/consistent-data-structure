#include <iostream>
using namespace std;
class LowerTriagular{
  private:
  int *A;
  int n;
  public:
  // this is the default constructor
  LowerTriagular()
  {
    n=2;
    // A=new int[2];
    A=new int[2*(2+1)/2];
  }
  LowerTriagular(int n)
  {
    this->n=n;
    // A=new int[n];
    A=new int[n*(n+1)/2];
  }
  ~LowerTriagular(){
    delete []A;
  }
  void Set(int i, int j, int x);
  int Get(int i, int j);
  void Display();
  int GetDimension(){ return n;}
};
  void LowerTriagular::Set(int i, int j, int x)
  {
    if(i>=j){
      // A[i-1]=x;
      A[i*(i-1)/2+j-1]=x;
    }
}
int LowerTriagular::Get(int i, int j){
  if(i>=j){
    // return A[i-1];
  return A[i*(i-1)/2+j-1];
  }
  return 0;

}
void LowerTriagular::Display(){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(i>=j)
      // cout<<A[i-1]<<" ";
    cout<<A[i*(i-1)/2+j-1]<<" ";
      else
      cout<<"0 ";
      }
      cout<<endl;
      }
     }
      
     int main()
     {
      int d;
      cout<<"Enter Dimensions";
      cin>>d;
      LowerTriagular lm(d);
     
      int x;
      cout<<"Enter All Elements";
      for(int i=1;i<=d;i++)
      {
      for(int j=1;j<=d;j++)
      {
      cin>>x;
      cout<<endl;
      lm.Set(i,j,x);
      }
      }
     
      lm.Display();
      return 0;
     }