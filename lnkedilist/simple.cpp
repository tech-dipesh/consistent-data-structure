#include <iostream>
using namespace std;

// making a struct
struct Node {
    int data;
    Node* next;
    // Constructor 
    // {} mean empty body, with passing to a next linked list,
    Node(int val) : data(val), next(nullptr) {}
};

void create(Node*& head, int A[], int n) {
    if (n == 0) return;
    head = new Node(A[0]);
    Node* last = head;
    for (int i = 1; i < n; i++) {
        last->next = new Node(A[i]);
        last = last->next;
    }
}

// need to clear  a memory whenever i created a linked list for avoiding a memory leak, also it's a good practice to use it,
void clear(Node*& head) {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    Node* head = nullptr;
    int A[] = {1, 2, 3, 4, 5};
    // create a new linked lsit with above array value.
    create(head, A, 5);
    // will avoid a memory leak of the clear function
    clear(head);
    return 0;
}