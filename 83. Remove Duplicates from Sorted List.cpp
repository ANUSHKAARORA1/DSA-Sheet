class Solution {
public:

    ListNode* deleteDuplicates(ListNode* head) {
        // ListNode* temp=head;
        // while(temp!=NULL && temp->next!=NULL){
        //     if(temp->val==temp->next->val){
        //         ListNode*nextnode=temp->next;
        //         temp->next=nextnode->next;
        //         nextnode->next=NULL;
        //         delete nextnode;
               
        //     }
        //    else{
        //     temp=temp->next;
        //    }
        // }
       
        // return head;
        // method 2 
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode*prev=head;
        ListNode*temp=head->next;
        while(temp!=NULL){
            if(temp->val==prev->val){
                prev->next=temp->next;
                temp->next=NULL;
                delete temp;
            }
            else{
                prev=prev->next;
                temp=temp->next;
            }
            temp=prev->next;
        }
    return head;
   
    }
};
