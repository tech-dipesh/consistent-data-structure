#include <iostream>
using namespace std;
class LLR{
  private:
  struct Node{
      Node *lchild;
      int data;
      int height;
      Node *rchild;
  };
  public:
  Node *root=nullptr;

  Node *NodeHeight(Node *p){
    int heightleft, heightright;
    // For handling the edge case:
    heightleft=p && p->lchild ? p->lchild->height:0;
    heightright=p && p->rchild?p->rchild->height:0;

    return heightleft>heightright?heightleft+1:heightright+1;
  }

  int BalancedFactor(Node *p){
      int heightleft, heightright;
    // For handling the edge case:
    heightleft=p && p->lchild ? p->lchild->height:0;
    heightright=p && p->rchild?p->rchild->height:0;
    return heightleft-heightright;
  }

  
  Node *RightInsert(Node *p, int key){
    if(p==nullptr){
     Node *t=new Node();
     t->data=key;
     t->height=1;
     t->lchild=t->rchild=nullptr;
     return t;
    }
    
    if(key<p->data)
    p->lchild=RightInsert(p->lchild, key);
    else if(key>p->data)
    p->rchild=RightInsert(p->rchild, key);
    // p->height=1;
    p->height=NodeHeight(p);
    
    // if that the heightfacctor is absolute value:
    if(BalancedFactor(p)==2 && BalancedFactor(p->lchild)==1)
    return LLRotation(p);
    if(BalancedFactor(p)==2 && BalancedFactor(p->lchild)==-1)
    return LLRotation(p);
    if(BalancedFactor(p)==-2 && BalancedFactor(p->lchild)==-1)
    return LLRotation(p);
    if(BalancedFactor(p)==-2 && BalancedFactor(p->lchild)==1)
    return LLRotation(p);
    
    return p;
  }
  
  Node *LRRotation(Node *p){
    Node *pl=p->lchild;
    Node *plr=pl->rchild;
   
    pl->rchild=plr->lchild;
    p->lchild=plr->rchild;


    plr->lchild=pl;
    plr->rchild=p;


    pl->height=NodeHeight(pl);
    plr->height=NodeHeight(plr);
  
    if(root=p)
      root=pl;
    return pl;
  }
  // getting the private value:
  Node *Getter(){return root;}
};

int main(){
  LLR ll;
  root=ll.RightInsert(ll.Getter(), 26);  
  ll.RightInsert(ll.Getter(), 13);
  ll.RightInsert(ll.Getter(), 6);
  return 0;
}