#include <iostream>
using namespace std;
int output(int row, int col, int matrix){
  for(int i=0;i<row;i++){
    for(int j=0;j<row;j++){
      int raw;
      cin>>raw[i][j];
      if(raw[i][j]==raw[j][i]) int value=raw[i][j];
      //just checking a diagonal matrix which i will do later.
    }
  }
  return 0;
}

int main(){
  int row, col, matrix;
  cin>>row;
  cin>>col;
  cin>>matrix;
  output(row, col, matrix);
return 0;
}