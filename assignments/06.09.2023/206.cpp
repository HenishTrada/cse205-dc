class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* newHead= NULL;
        // ListNode* curr= head;

        while(head != NULL){
            ListNode* temp = head->next;
            // temp = head->next;
            head->next = newHead;
            newHead = head ;
            head = temp;
        }

        return newHead; 
    }
};