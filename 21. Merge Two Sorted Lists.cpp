class Solution {
public:
    ListNode* mergeTwoLists(ListNode* left, ListNode* right) {
  if(left==NULL){
    //return right linked list
    return right;
  }
  if(right==NULL){
    return left;
  }
  ListNode *ans=new ListNode(-1);
  ListNode *mptr=ans;
  while(left && right){
if(left->val<=right->val){
    mptr->next=left;
    mptr=left;
    left=left->next;
  }
  else{
    mptr->next=right;
    mptr=right;
    right=right->next;
  }
  }
  while(left){
    mptr->next=left;
    mptr=left;
    left=left->next;
  }
    while(right){
    mptr->next=right;
    mptr=right;
    right=right->next;
  }
  return ans->next;
    }
};
