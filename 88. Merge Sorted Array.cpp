88. Merge Sorted Array
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //size of first array is given m so , as its index start from 0 so while traversing it move till m-1 .. similarliy for index2
        int index1=m-1;
        int index2=n-1;
        // new array which contain elements of m+nhave index starting from 0 to m+n-1
        int indexmerged=m+n-1;
        // jab tak nums1 ka index >=0 he and nums2 ka index >=0 he tab tak loop chalega
       while(index1>=0 && index2>=0){
        // agar nums1 ka jo index he wo >ya = hua nums2 ke index se 
         if(nums1[index1]>=nums2[index2]){
            // nums1  me hame merged array store karna tha too .. nums1 ka jo indexmerged hamne banaya he osme nums1 ka jo index he wo store karwa dege .. because wo greater he .. and then size of indexmerged ko decrease kar dege .. and inums1 ka size bhi decrease kar dege 
          nums1[indexmerged--]=nums1[index1--];
         }
         else{
            nums1[indexmerged--]=nums2[index2--];
         }
       }
       while(index2>=0){
        nums1[indexmerged--]=nums2[index2--];
       }

    }
};
