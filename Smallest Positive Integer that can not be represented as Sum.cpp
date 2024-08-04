// Smallest Positive Integer that can not be represented as Sum
// Given an array of size N, find the smallest positive integer value that is either not presented in the array or cannot be represented as a sum(coz sum means you are adding two or more elements) of some elements from the array.
// Example 1:
// Input: 
// N = 6
// array[] = {1, 10, 3, 11, 6, 15}
// Output: 
// 2
// Explanation:
// 2 is the smallest integer value that cannot 
// be represented as sum of elements from the array.
// Example 2:
// Input: 
// N = 3
// array[] = {1, 1, 1}
// Output: 
// 4
// Explanation: 
// 1 is present in the array. 
// 2 can be created by combining two 1s.
// 3 can be created by combining three 1s.
// 4 is the smallest integer value that cannot be 
// represented as sum of elements from the array.


class Solution
{   
public:
    long long smallestpositive(vector<long long> array, int n)
    { 
       sort(array.begin(),array.end());
         long long target=1,result=0;
    for(int i=0;i<array.size();i++){
       if(array[i]<=target){
           result=result+array[i];
           target=result+1;
       }
        else
        return target;
        
    }
    return target;
     
       }
    
};
