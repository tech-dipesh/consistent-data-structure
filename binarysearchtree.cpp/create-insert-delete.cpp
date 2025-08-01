#include <iostream>
using namespace std;
class BinaryTree{
  public:
  struct Node{
      Node *lchild;
      int data;
      Node *rchild;
  };
  public:
  Node *root=nullptr;
  void Insert(int val){
      Node *t=root;
      Node *r, *p;
      if(root==nullptr){
        p=new Node();
        p->data=val;
        p->lchild=p->rchild=nullptr;
        root=p;
        return;
      }
      while(t){
        r=t;
        if(val<t->data)
          t=t->lchild;
          else if(val>t->data)
            t=t->rchild;
            else
             return;
      }
      p=new Node();
      p->data=val;
      p->lchild=p->rchild=nullptr;
      if(val<r->data) r->lchild=p;
      else r->rchild=p;
  }

  void Inorder(Node *p){
    if(p)
      Inorder(p->lchild);
      cout<<p->data;
      Inorder(p->rchild);
  }
  void Preorder(Node *p){
    if(p)
    cout<<p->data;
      Inorder(p->lchild);
      Inorder(p->rchild);
  }
  void Postorder(Node *p){
    if(p)
    Inorder(p->lchild);
    Inorder(p->rchild);
    cout<<p->data;
  }

  Node *search(int val){
    Node *t=root;
    while(t){
      if(t->data==val)
      return t;
      else if(val>t->data)
        t=t->lchild;
        else t=t->rchild;
    }
    return nullptr;
  }
  
  ~BinaryTree(){
    Node *p=root;
    while(root){
      delete root;
      root=root->lchild;
      root=root->rchild;
    }
  }
    // thisi is the function to access private dat to main without exposing a data:
  Node *getRoot(){return root;}
};


int main(){
  BinaryTree b;
  b.Insert(10);
  b.Insert(30);
  b.Insert(35);
  b.Insert(40);

  b.Inorder(b.getRoot());
  cout<<endl;

 Node *temp=b.search(30);
  if(temp)
    cout<<"Element is found"<<temp->data<<endl;
  else cout<<"Element is not found";
return 0;
}