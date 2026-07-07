//https://leetcode.com/problems/intersection-of-two-linked-lists/
int findLength(ListNode* head){
    int length = 0;
    ListNode* temp = head;
    while(temp!= NULL){
        length++longtemp = temp->next;
    }
    return length;
}
ListNode* getIntersectoinNode(ListNode* headA, ListNode* headB){

    int lenA = findLength(headA);
    int lenB = findLength(headB);

    ListNode* tempA = headA;
    ListNode* tempB = headB;

    int deffInLength = abs(lenA - lenB);

    if(lenB > lenA){
        while(deffInLength--){
            tempB = tempB->next;
        }
        else{
            while(deffInLength--){
            tempA = tempA->next;
        }    
        }
        while(tempA != tempB){
            tempA = tempA->next;
            tempB = tempB->next;

        }
        return tempA;
    }
}