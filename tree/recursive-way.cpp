#include <iostream>
#include <stack>
using namespace std;

class Tree{
  private:
  struct Node{
      Node *lchild;
      int data;
      Node *rchild;
  }
  void Inorder(Node *p){
    if(p==nullptr) return nullptr;
    cout<<Inorder(p->data);
    Inorder(p->lchild);
    Inorder(p->rchild);
  }
  void Preorder(){
      if(p==nullptr) return nullptr;
      Preorder(p->lchild);
      cout<<Preorder(p->data);
    Preorder(p->rchild);
  }
  void Postorder(){
    if(p==nullptr) return nullptr;
    Postorder(p->lchild);
    Postorder(p->rchild);
    cout<<Postorder(p->data);
  }
  void LevelOrder(){
    
  }
};

int main(){
  Tree t;

  return 0;
}