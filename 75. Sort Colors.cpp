75. Sort Colors
class Solution {
public:
    void sortColors(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        //m1
        // int count0=0;
        // int count1=0;
        // int count2=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==0){
        //         count0++;
        //     }
        //    else if(nums[i]==1)
        //     {
        //         count1++;
        //     }
        //   else {
        //         count2++;
        //     }
        // }
        // int i=0;
        // while(count0--){
        //     nums[i]=0;
        //     i++;
        // }
        // while(count1--){
        //    nums[i]=1;
        //    i++;
        // }
        // while(count2--){
        //     nums[i]=2;
        //     i++;
        // }
        //inplace 
        int m=0;
        int l=0;
        int h=nums.size()-1;
        int i=0;
        while(m<=h){
            if(nums[m]==0){
                swap(nums[m],nums[l]);
                m++;
                l++;
            }
            else if(nums[m]==1){
                m++;
            }
            else{
                swap(nums[m],nums[h]);
                h--;
            }
        }
        } 
};
