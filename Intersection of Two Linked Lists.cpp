// Intersection of Two Linked Lists
// Given two linked lists head1 and head2, find the intersection of two linked lists. Each of the two linked lists contains distinct node values.
// Note: The order of nodes in this list should be the same as the order in which those particular nodes appear in input head1 and return null if no common element is present.
// Examles:
// Input: LinkedList1: 9->6->4->2->3->8 , LinkedList2: 1->2->8->6
// Output: 6->2->8
// Explanation: Nodes 6, 2 and 8 are common in both of the lists and the order will be according to LinkedList1. 
// Input: LinkedList1: 5->3->1->13->14 , LinkedList2: 3->13
// Output: 3->13
// Explanation: Nodes 3 and 13 are common in both of the lists and the order will be according to LinkedList1. 
// Expected time complexity: O(m+n)
// Expected auxiliary space: O(m+n)

 Node* findIntersection(Node* head1, Node* head2) {
        // code here
        unordered_map<int,int>map;
        Node *curr=head2;
        while(curr){
            map[curr->data]++;
            curr=curr->next;
        }
        Node*IL=NULL;
        Node*it=0;
        curr=head1;
        while(curr){
            if(map.find(curr->data)!=map.end()){
                if(!IL){
                    it=curr;
                    it=IL;
                }
                else{
                    if(map[curr->data]>0){
                        it->next=curr;
                        it=it->next;
                        map[curr->data]--;
                    }
                }
            }curr=curr->next;
        }
        it->next=NULL;
        return IL;
        
    }
