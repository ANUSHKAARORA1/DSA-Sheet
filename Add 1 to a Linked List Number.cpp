// Add 1 to a Linked List Number
// Difficulty: MediumAccuracy: 31.91%Submissions: 241K+Points: 4
// You are given a linked list where each element in the list is a node and have an integer data. You need to add 1 to the number formed by concatinating all the list node numbers together and return the head of the modified linked list. 
// Note: The head represents the first element of the given array.
// Examples :
// Input: LinkedList: 4->5->6
// Output: 457
// Explanation: 4->5->6 represents 456 and when 1 is added it becomes 457. 
// Input: LinkedList: 1->2->3
// Output: 124
// Explanation:  1->2->3 represents 123 and when 1 is added it becomes 124. 
// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(1)
// Constraints:
// 1 <= len(list) <= 105
// 0 <= list[i] <= 9
class Solution {
  public:
Node* reverselist(Node* &head){
      Node *prev=NULL;
      Node*temp=head;
      while(temp!=NULL){
              Node*forward=temp->next;
              temp->next=prev;
              prev=temp;
              temp=forward;
              
      }
  return prev;
      
  }
    Node* addOne(Node* head) {
       //step1: reverese linked list
       //add 1
       //reverse list
      head= reverselist(head);
       //add 1 to linked list node 
       int num=1;
       Node*temp1=head;
       while(temp1!=NULL){
           int sum=temp1->data+num;
           int digit=sum%10;
           num=sum/10;
           temp1->data=digit;
           if(num!=0 && temp1->next==NULL){
               Node*newnode=new Node(num);
               temp1->next=newnode;
               temp1=newnode;
           }
           temp1=temp1->next;
           
       }
       
       
       
      head= reverselist(head);
       return head;
    }
};
