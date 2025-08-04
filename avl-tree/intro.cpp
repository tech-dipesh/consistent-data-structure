#include <iostream>
using namespace std;
class AVLTree{
  private:
  struct Node{
    Node *lchild;
    int data;
    int height;
    Node *rchild;
  };
  public:
  Node *root=nullptr;
  void Insert(int value){
    Node *t=root;
    Node *r, *p;
    if(root==nullptr){
      p=new Node();
      p->data=value;
      p->lchild=p->rchild=nullptr;
      root=p;
      return;
    }
    while(t){
      r=t;
      if(value<t->data) t=t->lchild;
      else if(value>t->data)t=t->rchild;
      else return;
    }

    p=new Node();
    p->data=value;
    p->lchild=p->rchild=nullptr;

    if(value<r->data)r->lchild=p;
    else r->rchild=p;
  }
  
  void Inorder(Node *p){
    if(p){
      Inorder(p->lchild);
      cout<<p->data;
      Inorder(p->rchild);
    }
  }

  Node *Search(int value){
      Node *t=root;
      while(t){
        if(value==t->data)
          return t;
          else if(value<t->data)
            t=t->lchild;
            else t=t->rchild;
      }
      return nullptr;
  }
  // Get root value outside of class:
  Node *GetPrivate(){Node *root;}
};

int main(){
  AVLTree avl;
  avl.Insert(10);
  avl.Insert(3);
  avl.Insert(25);
  avl.Insert(32);
  // inserting with inorder:
  avl.Inorder(avl.GetPrivate());
  cout<<endl;
  // Node *temp;
  // temp=avl.Search(20);
  if(avl.Search(30)) cout<<"Element is found"<<avl.Search(30);
  else cout<<"Element is not found";
return 0;
}