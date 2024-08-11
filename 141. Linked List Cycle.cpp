141. Linked List Cycle
class Solution {
public:
    bool hasCycle(ListNode *head) {
        while(head==NULL){
           return false;
        }
        ListNode*slow=head;
        ListNode*fast=head->next;
        while(fast!=NULL &&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
            if(fast->next!=NULL){
                fast=fast->next;
            }
            if(fast==slow){
                return true;
            }
        }
        return false;
    }
