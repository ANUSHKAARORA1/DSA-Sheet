class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
     ListNode*dummy=new ListNode(0);
     dummy->next=head;
     ListNode*point=dummy;
     while(point->next!=NULL &&point->next->next!=NULL){
        ListNode *swap1=point->next;
        ListNode*swap2=point->next->next;
        //swapping
        swap1->next=swap2->next;
        swap2->next=swap1;
        point->next=swap2;
        point=swap1;
     }
     return dummy->next;
       
    }
};
