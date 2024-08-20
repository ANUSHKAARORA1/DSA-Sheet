
328. Odd Even Linked List
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head || head->next==0)return head;
        ListNode *odd=head;
        ListNode *even=head->next;
        ListNode *evenhead=even;
        while(even && even->next){
            odd->next=even->next;
            even->next=even->next->next;
            
            odd=odd->next;
            even=even->next;
        }
       odd->next=evenhead;
        return head;
      
    }
};
