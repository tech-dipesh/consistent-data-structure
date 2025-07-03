#include <iostream>
using namespace std;
class LinkedList{
  private:
  struct Node{
    int data;
    Node* next;
    Node(int, val): data(val), next(nullptr){}
  };
  Node* head;

  public:
  LinkedList(): head(nullptr){}

  -LinkedList{
    Node* current =head;
    while(current){
      Node* next=current->next;
      delete current;
      current=next;
    }
  }
  // void Insertathead(int val)
}

int main(){
  LinkedList list;
  list.Insertathead(1);
  return 0;
}