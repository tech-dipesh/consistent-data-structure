// Queue will be used for creating a binary tree:
// we will be importing a queue tree 
#include <iostream>
#include <queue>
using namespace std;
// linked list defination:
class Tree{
  public:
   Node *root;
   Tree(){root=nullptr;}
   void createTree();
   void Preorder(Node *p);
   void Postorder(Node *p);
   void Inorder(Node *p);
   void LevelOrder(Node *p);
   void Height(Node *root);
};

void Tree::createTree(){
  queue<int>qi;
  Node *p, *t;
  int x;
  Queue q(100);
  cout<<"Enter root value";
  cin>>x;
  Node *root=new Node();
  root->data=x;
  root->lchild=root->lchild=nullptr;
  q.enqueue(root);
  
  while(!q.isEmpty()){
    p=q.dq;
    cout<<"Enter left child of"<<p->data;
    cin>>x;
    if(x!=-1){
      t=new Node();
      t->data=x;
      t->lchild=t->rchild=nullptr;
      p->lchild=t;
      q.Enquque(t);
    }
    cout<<"Enter right child of"<<p->data;
    cin>>x;
      if(x!=-1){
        t=new Node();
        t->data=x;
        t->lchild=t->rchild=nullptr;
        p->rchild=t;
        q.Enquque(t);
      }
  }
}


// preorder code function:
void Tree::Preorder(Node *p){
  if(p){
    cout<<p->data;
    Preorder(p->lchild);
    Preorder(p->rchild);
  }
}

// preorder code function:
void Tree::Inorder(Node *p){
  if(p){
    Inorder(p->lchild);
    cout<<p->data;
    Inorder(p->rchild);
  }
}

// Postorder code function:
void Tree::Postorder(Node *p){
  if(p){
    Inorder(p->lchild);
    Inorder(p->rchild);
    cout<<p->data;
  }
}



int main(){
    
  Queue q;
  
return 0;
}