class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* start = new ListNode();
        ListNode* temp = start;
        int carry =0;

        while(l1 != NULL || l2 != NULL || carry != 0){
            int sum =0;

            if(l1 != NULL){
                sum += l1->val;
                l1 = l1->next;
            }

            if(l2 != NULL){
                sum+= l2->val;
                l2 = l2->next;
            }

            sum += carry;
            carry = sum/10;

            ListNode* newNode = new ListNode(sum%10);
            temp->next = newNode;
            temp = newNode;
        }

        return start->next;
    }
};