/*
 *  time complexity: O(n)
 *  space complexity: O(n)
 */

class Solution{
public:
    ListNode *swapPairs(ListNode *head){
        int length = 0;
        ListNode *node = head;
        while(node){
            node = node->ext;
            length++;
        }
        
        ListNode dummy(0, head);
        ListNode *prev = &dummy;
        ListNode *curr = head;
        
        for(int i = 0; i < length / 2; i++){
            ListNode *next = curr->next;
            curr->next = next->next;
            next->next = prev->next;
            prev->next = next;	
            prev = curr;
            curr = curr->next;
        }
        
        return dummy.next;
    }
};
