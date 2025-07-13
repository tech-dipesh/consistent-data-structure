#include <iostream>>
using namespace std;
class MergeTwoLinkedList
{
public:
  Node *merge(Node *first, Node *second)
  {
    Node *third = new Node();
    if (first->val < second->val)
    {
      // this line can be correct i don't know which would be a correct. third->next=first;
      third->val = first->val;
      first = first->next;
      third->next = nullptr;
    }

    else
    {
      // third->next=second;
      third->val = second->val;
      second = second->next;
      third->next = nullptr;
    }
    while (first && second)
    {
      if (first->val < second->val)
      {
        // third->next=first;
        third->val = first->val;
        first = first->next;
        third->next = first;
      }

      else
      {
        // third->next=second;
        third->val = second->val;
        second = second->next;
        third->next = second;
      }
    }
    if (first)
    {
      third->val = first->next;
      first = first->next;
      third->next = first;
    }
    if (second)
    {
      third->val = second->next;
      second = second->next;
      third->next = second;
    }
    // head=third;
    return third;
  }
}