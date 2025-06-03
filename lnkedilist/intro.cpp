#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* myNode = new Node{10, nullptr}; 
    // above value stored on the value and address beloe
    cout << myNode->data << endl;
    cout << myNode->next << endl;
    
    delete myNode; // Clean up
    return 0;
}