268. Missing Number
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==i){
        //         continue;
        //     }
        //     else{
        //         return i;
        //     }
        // }
        // return nums.size();

        // method2
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans=ans^nums[i];
        }
        int n=nums.size();
        for(int i=0;i<=n;i++){
            ans=ans^i;
        }
        return ans;
    }
};
