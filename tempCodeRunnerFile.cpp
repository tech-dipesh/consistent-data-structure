#include <bits/stdc++.h>
struct  node{
  int data;
  node* next;
}

int main(){
node*head, *newnode;
node *head=nullptr, *temp=nullptr;
int choice=0;
// int head=0, choice;
while(choice){
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
temp=head;
cout<<"linked list";
while(temp!=nullptr){
  cout<<temp->data;
  temp=temp->next;
  // count++;
}

return 0;
}