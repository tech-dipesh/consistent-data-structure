// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct  node{
  int data;
  node* next;
};
// 
int main(){
// node*head, *newnode;
node *head=nullptr, *temp=nullptr;
int choice=1;
// int head=0, choice;
while(choice==1){
node* newnode=new node;
cout<<"Enter a data";
cin>>newnode->data;
newnode->next=nullptr;

if(head==nullptr)
  head=temp=newnode;

else{
  temp->next=newnode;
  temp=newnode;
}
cout<<"Do you want to continue (0, 1)?";
cin>>choice;

}

// This is for the display a list
temp=head;
cout<<"linked list ";
while(temp!=nullptr){
  cout<<temp->data<<endl;
  temp=temp->next;
  // count++;
}


// this is for my undersand we need to clean a mmmeory:
while(head!=nullptr){
  node* toDelete=head;
  head=head->next;
  delete toDelete;
}
return 0;
}