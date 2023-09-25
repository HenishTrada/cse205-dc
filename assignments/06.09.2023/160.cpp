class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* n1 = headA;
        ListNode* n2 = headB;

        int cnt1 = 0, cnt2 =0;

        while(n1 != NULL){
            ++cnt1;
            n1 = n1->next;
        }

        
        while(n2 != NULL){
            ++cnt2;
            n2 = n2->next;
        }

        int diff = abs(cnt1 - cnt2);

        n1 = headA;
        n2 = headB;

        if( cnt2 > cnt1){
            for(int i=0; i<diff; i++){
                n2 = n2->next;
            }
        }
        else{
            for(int i=0; i<diff; i++){
                n1 = n1->next;
            }
        }

        while(n1 != n2){
            n1= n1->next;
            n2= n2->next;
        }
        return n1;
    }
};s