// Queue will be used for creating a binary tree:
// we will be importing a queue tree 
#include <iostream>
#include <queue>
#include "queue-tree.cpp"
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
   int Height(Node *root);

  //  this is the function to get access the main root:
  Node *mainRoot(){return root;}
};

void Tree::createTree(){
  queue<int>qi;
  Queue q(100);
  // Node *p, *t;
  int x;
  cout<<"Enter root value";
  cin>>x;
  Node *root=new Node();
  root->data=x;
  root->lchild=root->lchild=nullptr;
  q.enqueue(root);
  
  while(!q.isEmpty()){
    p=q.dq;
    cout<<"Enter left child of"<<p->data<<" add -1 for none value:";
    cin>>x;
    if(x!=-1){
      t=new Node();
      t->data=x;
      t->lchild=t->rchild=nullptr;
      p->lchild=t;
      q.Enquque(t);
    }
    cout<<"Enter right child of"<<p->data<<"add -1 for non value:";
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

void Tree::LevelOrder(Node *p){
  queue q(100);
  cout<<root->data;
  q.enqueue(root);

  while(!q.isEmpty()){
    root=q.dequeue();
    if(root->lchild){
      cout<<root->lchild->data;
      q.enqueue(root->lchild);
    }
    if(root->rchild){
      cout<<root->rchild->data;
      q.enqueue(root->rchild);
    }
  }
}


int Tree::Height(Node *p){
  int x=0, y=0;
  if(root==0) return 0;
  x=Height(root->lchild);
  x=Height(root->rchild);
  if(x>y)
    return x+1;
    else
      return y+1;
}
int main(){
    
  Tree t;
  t.createTree()
  cout<<"PreOrder:";
  // Function of the main root:
  t.PreOrder(t.mainRoot());
return 0;
}