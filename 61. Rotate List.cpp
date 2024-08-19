61. Rotate List




/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
int getlength(ListNode*head){
    int len=0;
    while(head){
        len++;
        head=head->next;
    }
    return len;
}
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return 0;
        int len=getlength(head);
        int actualrotate=(k%len);
        if(actualrotate==0)return head;
        int newlastnodepos=len-actualrotate-1;
        ListNode*newlastnode=head;
        for(int i=0;i<newlastnodepos;i++){
            newlastnode=newlastnode->next;
        }
        ListNode*newhead=newlastnode->next;
        newlastnode->next=0;
        ListNode*it=newhead;
        while(it->next){
            it=it->next;

        }
        it->next=head;
        return newhead;
    }
};
