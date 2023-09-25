class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* curr = slow;
        ListNode* newHead= NULL;
        while(curr != NULL){
        ListNode* temp = curr->next;
            curr->next = newHead;
            newHead = curr;
            curr = temp;
        }

        ListNode* n1 = head;
        ListNode* n2 = newHead;

        while(n2 != NULL){
            if(n2->val != n1->val) {

                return false;
            }

            n1= n1->next;
            n2= n2->next;
        }

        return true;
    }
};