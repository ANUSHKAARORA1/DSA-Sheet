503. Next Greater Element II
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        //since array is in circular formate so double the array tak array virtually double
        int n=nums.size();
        vector<int>v(n);
        stack<int>st;
       
        //traverse elements from end 
        for(int i=2*n-1;i>=0;i--){
         while(!st.empty() && st.top()<=nums[i%n]){
            st.pop();
         }
         if(i<n){
            v[i]=st.empty()?-1:st.top();
         }
         st.push(nums[i%n]);
        }
        return v;
    }
};
