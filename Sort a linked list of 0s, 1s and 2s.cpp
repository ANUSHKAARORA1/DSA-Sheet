Sort a linked list of 0s, 1s and 2s
Given a linked list of N nodes where nodes can contain values 0s, 1s, and 2s only. The task is to segregate 0s, 1s, and 2s linked list such that all zeros segregate to head side, 2s at the end of the linked list, and 1s in the mid of 0s and 2s.

Example 1:

Input:
N = 8
value[] = {1,2,2,1,2,0,2,2}
Output: 0 1 1 2 2 2 2 2
Explanation: All the 0s are segregated
to the left end of the linked list,
2s to the right end of the list, and
1s in between.

  class Solution
{
    public:
    void print(Node* head) {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->data << "->";
            temp = temp -> next;
        }
        cout << "NULL" << endl;
    }
    void insertAtTail(Node* &toMove, Node* &head, Node* &tail) {
       //LL is empty
       if(head == NULL && tail == NULL) {
           head = toMove;
           tail = toMove;
       }
       else {
           tail->next = toMove;
           tail = toMove;
       }
    }
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
         Node* zeroHead = NULL;
        Node* zeroTail = NULL;
        
        Node* oneHead = NULL;
        Node* oneTail = NULL;
        
        Node* twoHead = NULL;
        Node* twoTail = NULL;
        
        // LL pr traverse larenge and ye 3 LL ready krenge separate
        Node* temp = head;
        while(temp != NULL) {
            
            //create toMove node and isolate it
            Node* toMove = temp;
            temp = temp -> next;
            toMove->next = NULL;
            
            if(toMove->data == 0) {
                insertAtTail(toMove, zeroHead, zeroTail);
            }
            else if(toMove->data == 1) {
                insertAtTail(toMove, oneHead, oneTail);
            }
            else if(toMove->data == 2) {
                insertAtTail(toMove, twoHead, twoTail);
            }
            
        }

        //yaha jab pohoche, toh teeno LL ready h 
        //merge them 
        //empty wali possibility bhulna mat
        if(zeroHead != NULL) {
            //zero list is non-empty
            if(oneHead != NULL) {
                //one list is non-empty
                zeroTail->next = oneHead;
                //merge with 2 wali list
                oneTail->next = twoHead;
            }
            else {
                //one list is empty
                zeroTail->next = twoHead;
            }
            return zeroHead;
        }
        else {
            //zero List is empty
            if(oneHead != NULL) {
                oneTail->next = twoHead;
                return oneHead;
            }
            else {
                return twoHead;
            }
        }
     
        
    }
};
