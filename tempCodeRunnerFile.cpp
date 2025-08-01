#include <iostream>
using namespace std;

class BinaryTree {
private:
    struct Node {
        Node* lchild;
        int data;
        Node* rchild;
        Node(int val) : data(val), lchild(nullptr), rchild(nullptr) {}
    };
    
public:
    Node* root = nullptr;
    
    void Insert(int val) {
        if(root == nullptr) {
            root = new Node(val);
            return;
        }
        
        Node* t = root;
        Node* r = nullptr;
        
        while(t) {
            r = t;
            if(val < t->data)
                t = t->lchild;
            else if(val > t->data)
                t = t->rchild;
            else 
                return; // Value already exists
        }
        
        Node* p = new Node(val);
        if(val < r->data) 
            r->lchild = p;
        else 
            r->rchild = p;
    }

    void Inorder(Node* p) {
        if(p) {
            Inorder(p->lchild);
            cout << p->data << " ";
            Inorder(p->rchild);
        }
    }

    void Preorder(Node* p) {
        if(p) {
            cout << p->data << " ";
            Preorder(p->lchild);
            Preorder(p->rchild);
        }
    }

    void Postorder(Node* p) {
        if(p) {
            Postorder(p->lchild);
            Postorder(p->rchild);
            cout << p->data << " ";
        }
    }

    Node* search(int val) {
        Node* t = root;
        while(t) {
            if(val == t->data)
                return t;
            else if(val < t->data)
                t = t->lchild;
            else 
                t = t->rchild;
        }
        return nullptr;
    }

    ~BinaryTree() {
        clear(root);
    }

    void clear(Node* node) {
        if(node) {
            clear(node->lchild);
            clear(node->rchild);
            delete node;
        }
    }

    Node* getRoot() { return root; }
};

int main() {
    BinaryTree b;
    b.Insert(10);
    b.Insert(30);
    b.Insert(35);
    b.Insert(40);

    cout << "Inorder traversal: ";
    b.Inorder(b.getRoot());
    cout << endl;

    Node* temp = b.search(30);
    if(temp)
        cout << "Element is found: " << temp->data << endl;
    else 
        cout << "Element is not found" << endl;

    return 0;
}