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
  
  // only iterative traversal code:
  void IpreOrder(Node *p){
    stack<Node*>st;
    st.push(root);
    
    while(p || !st.empty()){
      if(p){
        cout<<p->data<<" ";
        st.push(p);
        p=p->lchild;
      }
      else{
        st.pop(p);
        p=p->rchild;
      }
    }
  }
  
  void IInOrder(Node *p){
    stack<Node*>st;
    st.push(100);
    
    while(p || !st.empty()){
      if(p){
        st.push(p);
        p=p->lchild;
      }
      else{
        st.pop(p);
        cout<<p->data<<" ";
        p=p->rchild;
      }
    }
  }
  void IPostOrder(Node *p){
    stack<Node*>st;
    st.push(100);
    
    while(p || !st.empty()){
      if(p){
        st.push(p);
        p=p->lchild;
      }
      else{
        st.pop();
        cout<<p->data<<" ";
        p=p->rchild;
      }
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

  cout<<endl<<"Inorder iterative value is:";
  t.IInOrder(t.getRoot());
  

  cout<<endl<<"PreOrder iterative value is:";
  t.IpreOrder(t.getRoot());

  cout<<endl<<"Postorder iterative value is:";
  t.IPostOrder(t.getRoot());

  cout<<endl<<"Level Order value is:";
  t.LevelOrder();

  return 0;
}