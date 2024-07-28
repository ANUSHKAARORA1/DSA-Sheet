// key pair/ 2sum gfg
// Given an array arr of positive integers and another number x. Determine whether two elements exist in arr whose sum is exactly x or not. Return a boolean value true if two elements exist in arr else return false.
// Examples:
// Input: x = 16, arr[] = [1, 4, 45, 6, 10, 8]
// Output: true
// Explanation: arr[3] + arr[4] = 6 + 10 = 16
// Input: x = 11, arr[] = [1, 2, 4, 3, 6]
// Output: false
// Explanation: None of the pair makes a sum of 11
// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(n)

class Solution {
  public:
    // Function to check if array has 2 elements
    // whose sum is equal to the given value
    bool hasArrayTwoCandidates(vector<int>& arr, int x) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int i=0;
        int j=n-1;
        while(i<j){
            if(arr[i]+arr[j]==x)
            {
                return true;
            }
            else if(arr[i]+arr[j]>x)
            {
                j--;
            }
            else{
                 i++;
            }
           
        }
      return false;
}};
