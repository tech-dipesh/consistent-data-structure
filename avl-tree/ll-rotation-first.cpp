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
    int hl, hr;
    // For handling the edge case:
    hl=p && p->lchild ? p->lchild->height:0;
    hr=p && p->rchild?p->rchild->height:0;

    return hl>hr?hl+1:hr+1;
  }


  Node *LLRotation(Node *p){
    Node *pl=p->lchild;
    Node Iplr=pl->rchild;

    pl->rchild=p;
    p->lchild=plr;
    p->height=NodeHeight(p);
    pl->height=NodeHeight(pl);

    if(root=p)root=pl;
    return pl;
  }
  
  Node *RInsert(Node *p, int key){
    Node *t=nullptr;
    if(p==nullptr){
      t=new Node();
      t->data=key;
      t->height=1;
      t->lchild=t->rchild=nullptr;
      return t;
    }
    if(key<p->data) p->lchild=RInsert(p->lchild, key);
    else if(key>p->data)p->rchild=RInsert(p->rchild, key);
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

  // it should be max absolute 1 not more than 1
  int BalancedFactor(Node *p){
    
  }

  // getting the private value:
  Node *Getter(){return root;}
};

int main(){
   LLR ll;
  Node *root=ll.RInsert(ll.Getter(), 26);  
  ll.RInsert(ll.Getter(), 13);
  ll.RInsert(ll.Getter(), 6);
return 0;
}