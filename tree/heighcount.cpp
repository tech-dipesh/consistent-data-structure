#include <iostream>
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

  // printing a level order value:
  void levelOrder(Node *p){
      queue<Node*>q;
      cout<<root->data<<" ";
      // q.push(root);
      q.push(root);

      while(!q.empty()){
        root=q.pop();
        if(root->lchild){
          cout<<root->lchild->data;
          // q.push(root->rchild);
          q.push(root->rchild);
        }
      }
  }


  int Height(Node *p){
    int l=0;
    int r=0;
    if(p==nullptr)return 0;
    l=Height(p->lchild);
    r=Height(p->rchild);
    return l+r+1;
  }
  // thisi is the function to access private data to main without exposing a data:
  Node *getRoot(){return root;}
};
int main(){
  Tree.insert(10);
  Tree.insert(30);
  Tree.insert(40);
  Tree.insert(50);
  Tree.insert(70);
  Tree.insert(90);
  // Checking the height of the tree:
  cout<<endl<<Tree.Height();
return 0;
}