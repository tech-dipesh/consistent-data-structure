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
  Node *root =nullptr;
  public:

  // Node *NodeHeight(Node *p){
  int NodeHeight(Node *p){
   if(!p) return 0;
   int leftheight=NodeHeight(p->lchild);
   int righttheight=NodeHeight(p->rchild);
   return (leftheight>righttheight?leftheight: righttheight)+1;
  }

  int BalancedFactor(Node *p){
    //   int heightleft, heightright;
    // // For handling the edge case:
    // heightleft=p && p->lchild ? p->lchild->height:0;
    // heightright=p && p->rchild?p->rchild->height:0;
    // return heightleft-heightright;
    if(!p) return 0;
    return NodeHeight(p->lchild)-NodeHeight(p->rchild);
  }

  Node *LLRotation(Node *p){
    Node *pl=p->lchild;
    Node *plr=pl->rchild;

    pl->rchild=p;
    p->lchild=plr;
    // for updating the heights
    p->height=NodeHeight(p);
    pl->height=NodeHeight(pl);

    if(root==p)
      root=pl;
    return pl;
  }
   
  // all 4 toation on here:
  Node *LRRotation(Node *p){
    Node *pl=p->lchild;
    Node *plr=pl->rchild;

    pl->rchild=plr->lchild;
    p->lchild=plr->rchild;

    plr->lchild=pl;
    plr->rchild=p;

    pl->height=NodeHeight(pl);
    p->height=NodeHeight(p);
    plr->height=NodeHeight(plr);
    if(root==p)
      root=plr;
     return plr;
  }

  Node *RRRotation(Node *p){
    Node *pr=p->rchild;
    Node *plr=pr->lchild;

    pr->lchild=p;
    p->rchild=plr;
    // for updating the heights
    p->height=NodeHeight(p);
    pr->height=NodeHeight(pr);

    if(root==p)
      root=pr;
    return pr;
  }
   
  // all 4 toation on here:
  Node *RLRotation(Node *p){
    Node *pl=p->rchild;
    Node *plr=pl->lchild;

    pl->lchild=plr->rchild;
    p->rchild=plr->lchild;

    plr->rchild=pl;
    plr->lchild=p;

    pl->height=NodeHeight(pl);
    p->height=NodeHeight(p);
    plr->height=NodeHeight(plr);
    if(root==p)
      root=plr;
     return plr;
  }

  Node *RightInsert(Node *p, int key){
    Node *t=nullptr;
    if(p==nullptr){
     t=new Node();
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


    int bf=BalancedFactor(p);
    // if that the heightfacctor is absolute value:
    // this is for the ll value:
   if(bf==2 && BalancedFactor(p->lchild)==1)
        return LLRotation(p);
        // this is for the lr value:
  if(bf==2 && BalancedFactor(p->lchild)==-1)
       p->lchild=LRRotation(p->lchild);
        return LLRotation(p);
          // this is for the rr value:
    if(bf==-2 && BalancedFactor(p->lchild)==-1)
        return RRRotation(p);
        // this is for the rl value:
    if(bf==-2 && BalancedFactor(p->lchild)==1)
      p->rchild=RLRotation(p->rchild);
        return RRRotation(p);

    return p;
  }
    void insert(int key) {
        root = RightInsert(root, key);
    }
     int findHeight() const {
        return NodeHeight(root);
     }
     ~LLR(){
      clear(root);
     }
  // getting the private value:
  Node *Getter(){return root;}
};

int main(){
   LLR ll;
  // ll.root=ll.RightInsert(ll.Getter(), 26);  
  // ll.root=ll.RightInsert(ll.Getter(), 13);
  // ll.root=ll.RightInsert(ll.Getter(), 6);
  ll.insert(20);
  ll.insert(50);
  ll.insert(40);
  ll.insert(29);
  ll.insert(55);

  cout<<"Tree is height:"<<ll.findHeight();
return 0;
}