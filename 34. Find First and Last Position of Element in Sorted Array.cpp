// 34. Find First and Last Position of Element in Sorted Array
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v(0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                v.push_back(i);
                break;
            }
        }
    for(int j=nums.size()-1;j>=0;j--){
        if(nums[j]==target){
            v.push_back(j);
            break;
        }
    }
    if(v.empty()){
        //target not found
        v.push_back(-1);
        v.push_back(-1);
    }
    return v;
    }
};
