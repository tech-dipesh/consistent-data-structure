#include <iostream>
using namespace std;
class Recursive{
  private:
  struct Node{
    Node *lchild;
    int data;
    Node *rchild;
  };
  public:
  Node *root=nullptr;

// this is the insertion way of recusrive way:
Node *RecusriveInsertion(Node *p, int key){
  if(p==nullptr){
    Node *t=new Node();
    t->data=key;
    t->lchild=t->rchild=nullptr;
    return t;
  }
  if(key<p->data)
    p->lchild=RecusriveInsertion(p->lchild, key);
  else if(key>p->data) p->rchild=RecusriveInsertion(p->rchild, key);

  return p;
}


int Height(Node *p){
  int x, y;
  if(p==nullptr)return 0;
  x=Height(p->lchild);
  y=Height(p->rchild);
  // return x+y+1;
  // Ternary operator:
  return x>y?x+1:y+1;
}

Node *InPreDessor(Node *p){
  while(p && p->lchild)
    p=p->lchild;
    return p;
}
Node *InSuccesor(Node *p){
  while(p && p->lchild)
    p=p->rchild;
    return p;
}


Node *Delete(Node *p, int key){
  Node *q;
  if(p==nullptr)return nullptr;
  if(p->lchild==nullptr && p->rchild==nullptr){
        delete p;
        return nullptr;
  }
  if(key<p->data)p->lchild=Delete(p->lchild, key);
  else if(key>p->data)p->rchild=Delete(p->rchild, key);
  else{
    if(Height(p->lchild)>Height(p->rchild)){
      q=InPreDessor(p->lchild);
      p->data=q->data;
      p->lchild=Delete(p->lchild, q->data);
    }
    else{
      
    }
  }
}


// Search function code:
Node *Search(int value){
  Node *p=root;
  while(p){
    if(p->data==value)return p;
    if(p->data>value)p=p->lchild;
    else p=p->rchild;
  }
  return nullptr;
}

// getting the private value:
Node *Getprivate(){return root;}

};


    
int main(){
   Recursive b;
   b.RecusriveInsertion(b.Getprivate(), 8);
    b.RecusriveInsertion(b.Getprivate(), 2);
    b.RecusriveInsertion(b.Getprivate(), 40);
    b.RecusriveInsertion(b.Getprivate(), 6);
     b.RecusriveInsertion(b.Getprivate(), 6);
    b.Delete(b.Getprivate(), 40);
    //  inorder traversal for the binary search tree:
    cout<<endl;
      // Recursive::Node *temp = b.Search(20);
    // Node *temp;
    // temp=b.Search(20);
    if(b.Search(20))cout<<"Element is found"<<b.Search(20);
    else cout<<"Element is not found";
return 0;
}