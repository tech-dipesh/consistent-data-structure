#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Tree{
  private:
  struct Node{
      Node *lchild;
      int data;
      Node *rchild;
        Node(int val):data(val), lchild(nullptr), rchild(nullptr){}

  };
  Node *root;
  public:
   Tree() : root(nullptr) {}
  void insert(int val){
    if(root==nullptr){
      root=new Node(val);
      return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
      Node *first=q.front();
      q.pop();
      if(first->lchild==nullptr){
        first->lchild=new Node(val);
        return;
      }
      else q.push(first->lchild);
      if(first->rchild==nullptr){
        first->rchild=new Node(val);
        return;
      }
      else q.push(first->rchild);
    }
  }



  void Inorder(Node *p){
    if(p==nullptr) return;
    Inorder(p->lchild);
    cout<<p->data<<" ";
    Inorder(p->rchild);
  }
  void Preorder(Node *p){
      if(p==nullptr) return;
      cout<<p->data<<" ";
      Preorder(p->lchild);
    Preorder(p->rchild);
  }
  void Postorder(Node *p){
    if(p==nullptr) return;
    Postorder(p->lchild);
    Postorder(p->rchild);
    cout<<p->data<<" ";
  }

  void LevelOrder(){
  if(root==nullptr)return;
    //  the queue Node:
    queue<Node*>q;
    q.push(root);

    while(!q.empty()){
      Node *first=q.front();
      q.pop();
      // Printing a node data:
      cout<<first->data<<" ";
      if(first->lchild)
        q.push(first->lchild);
      if(first->rchild)
        q.push(first->rchild);
    }
  }
  // thisi is the function to access private dat to main without exposing a data:
  Node *getRoot(){return root;}
  
};

int main(){
  Tree t;
  t.insert(7);
  t.insert(10);
  t.insert(19);
  t.insert(12);

  cout<<endl<<"Inorder value is:";
  t.Inorder(t.getRoot());
  

  cout<<endl<<"PreOrder value is:";
  t.Preorder(t.getRoot());

  cout<<endl<<"Postorder value is:";
  t.Postorder(t.getRoot());

  cout<<endl<<"Level Order value is:";
  t.LevelOrder();
  return 0;
}