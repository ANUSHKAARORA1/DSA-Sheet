class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*newlist=new ListNode(0);
           ListNode*head=newlist;
        int carry=0;
        while(l1&&l2){
           int value=l1->val+l2->val+carry;
           carry=value/10;
           newlist->next=new ListNode(value%10);
           newlist=newlist->next;
           l1=l1->next;
           l2=l2->next;
    }
    while(l1){
         int value=l1->val+carry;
           carry=value/10;
           newlist->next=new ListNode(value%10);
           newlist=newlist->next;
           l1=l1->next;
    }
while(l2){
    int value=l2->val+carry;
           carry=value/10;
           newlist->next=new ListNode(value%10);
           newlist=newlist->next;
           l2=l2->next;
}
if(carry){
    newlist->next=new ListNode(carry);
}
return head->next;
}};
