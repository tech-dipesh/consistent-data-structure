//  Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // ListNode* curr=head;
        //  ListNode* back=nullptr;
        //  ListNode* front=nullptr;
        // while(curr!=nullptr){
        //     front=curr->next;
        //     curr->next=back;
        //     back=curr;
        //     curr=front;
        // }
        // return back;
    if(head==nullptr || head->next==nullptr)return head;
    ListNode* nhead=reverseList(head->next);
    head->next->next=head;
    head->next=nullptr;
    return nhead;
    }
};

int main(){
  int arr={2, 5, 9, 3, 19, 21, 32};
  cout<<reverseList(arr);
  return 0;
}