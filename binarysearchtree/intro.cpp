#include <iostream>
using namespace std;
class BST{
  private:
  struct Node{
    Node *lchild;
    int data;
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
        // need to return the value;
        return;
      }
      while(t){
        r=t;
        if(value<t->data)t=t->lchild;
          else if(value>t->data) t=t->rchild;
          else return;
      }
    p=new Node();
    p->data=value;
  p->lchild=p->rchild=nullptr;
  if(value<p->rchild)r->lchild=0;
  else r->rchild=0;
  }
  
// searching the key:
  Node *Search(int key){
    Node *t=nullptr;
    while(t){
      if(key==t->data)return t;
      if(key<t->data)t=t->lchild;
      else t=t->rchild;
    }
    return nullptr;
  }
  // Searching the key
void Inorder (Node *p){
if(p){
  Inorder(p->rchild);
    cout<<p->data;
    Inorder(p>rchild);
  }
}

// getting the private value:
Node *Getprivate(){return root;}

};


    
int main(){
   BST b;
   b.Insert(8);
    b.Insert(2);
    b.Insert(40);
    b.Insert(6);
     b.Insert(57);
    b.Inorder(node(b.Getprivate()));
    cout<<endl;
    Node *temp=b.Search(20);
    if(temp)cout<<"Element is found"<<temp->data;
    else cout<<"Element is not found";
return 0;
}