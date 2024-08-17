25. Reverse Nodes in k-Group
Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.
k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.
You may not alter the values in the list's nodes, only nodes themselves may be changed.
Example 1:
Input: head = [1,2,3,4,5], k = 2
Output: [2,1,4,3,5]
Example 2:
Input: head = [1,2,3,4,5], k = 3
Output: [3,2,1,4,5]

class Solution {
public:
int getlength(ListNode*&head){
    ListNode* temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        //checking for length of linked list
        int len=getlength(head);
        if(len<k){
            return head;
            //no need to reverse
        }
        ListNode*prev=NULL;
        ListNode*curr=head;
        int position=0;
        while(position<k){
            ListNode *forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            position++;
        }
        if(curr!=NULL){
            ListNode*reverseit=reverseKGroup(curr,k);
            head->next=reverseit;
        }
        return prev;
    }
    
};
