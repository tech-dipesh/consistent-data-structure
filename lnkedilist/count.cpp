#include <iostream>
#include <vector>
using namespace std;
// singly liinked list:
 struct ListNode {
     int val;
    ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
class Solution {
public:
    int countNodes(ListNode* head) {
      int count=0;
      while(head){
        count++;
        head->next;
      }
      return count;
    }
    
    // create a linked list from a vector
    ListNode* createLinkedList(const vector<int>& values) {
        if (values.empty()) return nullptr;
        
        ListNode* head = new ListNode(values[0]);
        ListNode* current = head;
        
        for (size_t i = 1; i < values.size(); ++i) {
            current->next = new ListNode(values[i]);
            current = current->next;
        }
        
        return head;
    }
    
    // for free a memory which is imp imo
    // it will remove every items from the list
    void deleteLinkedList(ListNode* head) {
        while (head != nullptr) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
    }
};


  int main() {
  ListNode* head = solution.createLinkedList({1, 2, 3, 4, 5});
 int nodeCount = solution.countNodes(head);
 cout << "Number of nodes: "<< nodeCount;
  solution.deleteLinkedList(head);
  return 0;
}