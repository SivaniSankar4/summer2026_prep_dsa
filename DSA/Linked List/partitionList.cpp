#include <iostream>
using namespace std;
// Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* left=new ListNode(-1);
        ListNode* right=new ListNode(-1);
        ListNode* lp=left;
        ListNode* rp=right;
        ListNode* temp=head;
        while(temp!=NULL){
            if(temp->val<x){
                lp->next=temp;
                lp=lp->next;
            }else{
                rp->next=temp;
                rp=rp->next;
            }
            temp=temp->next;
        }
        rp->next=NULL;
        rp=right->next;
        lp->next=rp;
        delete right;
        lp=left->next;
        delete left;
        return lp;

        
    }
    void print(ListNode* head, int x){
        
        cout << "Original list: ";
        ListNode* curr = head;
        while (curr != nullptr) {
            cout << curr->val << " ";
            curr = curr->next;
        }
        cout << endl;

        // Partition the list
        ListNode* partitionedHead = partition(head, x);

        cout << "Partitioned list (around " << x << "): ";
        curr = partitionedHead;
        while (curr != nullptr) {
            cout << curr->val << " ";
            curr = curr->next;
        }
        cout << endl;

        // Clean up heap memory to prevent memory leaks
        curr = partitionedHead;
        while (curr != nullptr) {
            ListNode* nextNode = curr->next;
            delete curr;
            curr = nextNode;
        }
    }
};

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(4);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(2);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(2);
    int x=3;
    Solution obj;
    obj.print(head,x);

    return 0;
}