// #include <stdlib.c++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node* prev;
};

// class defination on the double linked list
class Show{
    private:
    Node* head;
    NOde* tail;
  public:
  DoubleLinkedList(): head(nullptr), tail(nullptr){}
  int DoubleLinkedList(int num){
    int value;
    Node* show;
  }
  int Insertion(Node* show){
    Node* temp=show;
    Node* front=show->next;
    Node* bacck=temp->back;
  }
}
int main() {
    Node* myNode = new Node{10, nullptr}; 
    // above value stored on the value and address beloe
    cout << myNode->data << endl;
    cout << myNode->next << endl;
    //is this the best way to do it, how does this work on the factual information.
    delete myNode; // Clean up
    return 0;
}