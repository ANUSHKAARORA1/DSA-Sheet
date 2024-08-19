// Flattening a Linked List
// Given a Linked List, where every node represents a sub-linked-list and contains two pointers:
// (i) a next pointer to the next node,
// (ii) a bottom pointer to a linked list where this node is head.
// Each of the sub-linked lists is in sorted order.
// Flatten the Link List so all the nodes appear in a single level while maintaining the sorted order.
// Note: The flattened list will be printed using the bottom pointer instead of the next pointer. Look at the printList() function in the driver code for more clarity.
// Exmples:
// Input:
// Output:  5-> 7-> 8- > 10 -> 19-> 20-> 22-> 28-> 30-> 35-> 40-> 45-> 50.
// Explanation: The resultant linked lists has every node in a single level.(Note: | represents the bottom pointer.)
// Inpu:
// Output: 5-> 7-> 8-> 10-> 19-> 22-> 28-> 30-> 50
// Explanation: The resultant linked lists has every node in a single level.(Note: | represents the bottom pointer.)
// Note: In the output section of the above examples, the -> represents the bottom pointer.
// Expected Time Complexity: O(n * n * m)
// Expected Auxiliary Space: O(n)
// Constraints:
// 0 <= number of nodes <= 50
// 1 <= no. of nodes in sub-LinkesList(mi) <= 20
// 1 <= node->data <= 103

class Solution {
  public:
  Node *merge(Node*a,Node*b){
      if(!a)return b;
      if(!b)return a;
      Node*ans=0;
      if(a->data <b->data){
          ans=a;
          a->bottom=merge(a->bottom,b);
      }
      else{
          ans=b;
          b->bottom=merge(a,b->bottom);
      }
  }
    // Function which returns the  root of the flattened linked list.
    Node *flatten(Node *root) {
        // Your code here
        if(!root)return 0;
        Node *mergeLL=merge(root,flatten(root->next));
        return mergeLL;
    }
};
