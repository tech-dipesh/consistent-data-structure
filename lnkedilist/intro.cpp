// #include <iostream>
#include <stdlib.c++.h>
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
    //is this the best way to do it, how does this work on the factual information.
    delete myNode; // Clean up
    return 0;
}