class Solution {
    
    ListNode* reverseLinkedList(ListNode* head, int k) {
        
        ListNode* new_head = NULL;
        ListNode* ptr = head;
        
        while (k > 0) {
            
            ListNode* next_node = ptr->next;
            ptr->next = new_head;
            new_head = ptr;
            ptr = next_node;
            k--;
        }
       
        return new_head;
    
    }
            
    public:
     ListNode* reverseKGroup(ListNode* head, int k) {
        
        int count = 0;
        ListNode* ptr = head;
        
      
        while (count < k && ptr != NULL) {
            ptr = ptr->next;
            count++;
        }
            
        if (count == k) {
            ListNode* reversedHead = reverseLinkedList(head, k);
            head->next = reverseKGroup(ptr, k);
            return reversedHead;
        }
            
        return head;
    }
};