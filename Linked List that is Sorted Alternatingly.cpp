// Linked List that is Sorted Alternatingly
// You are given a Linked list of size n. The list is in alternating ascending and descending orders. Sort the given linked list in non-decreasing order.
// Example 1:
// Input:
// n = 6
// LinkedList = 1->9->2->8->3->7
// Output: 1 2 3 7 8 9
// Explanation: 
// After sorting the given list will be 1->2->3->7->8->9.
// Example 2:
// Input:
// n = 5
// LinkedList = 13->99->21->80->50
// Output: 13 21 50 80 99
// Explanation:
// After sorting the given list will be 13->21->50->80->99.
// Your Task:
// You do not need to read input or print anything. The task is to complete the function sort() which should sort the linked list of size n in non-decreasing order. 
// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(1)

/*
struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data =x;
	    next = NULL;
	}
};
*/

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
    // your task is to complete this function
    void sort(Node *head)
    {
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
