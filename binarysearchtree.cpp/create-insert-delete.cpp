#include <iostream>
using namespace std;
class BinaryTree{
  private:
  struct Node{
      Node *lchild;
      int data;
      Node *rchild;
  }
  public:
  Node *root;
  void Insert(int val){

  }
};
int main(){
  BinaryTree b;
  b.Insert(10);
  b.Insert(20);
return 0;
}