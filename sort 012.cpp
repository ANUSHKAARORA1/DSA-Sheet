// Sort 0s, 1s and 2s 2 methods 
// [Naive Approach] Sorting – O(N * log(N)) Time and O(1) Space:
// The naive solution is to simply sort the array using a standard sorting algorithm or sort library function. This will simply place all the 0s first, then all 1s and 2s at last. This approach requires O(N * log(N)) time and O(1) space.

// [Better Approach] Counting 0s, 1s and 2s – Two Pass – O(N) Time and O(1) Space:
// A better solution is to traverse the array once and count number of 0s, 1s and 2s. Let these counts be c0, c1 and c2. Now traverse the array again, put c0 (count of 0s) 0s first, then c1 1s and finally c2 2s. This solution works in O(n) time, but this solution is not stable and requires two traversals of the array. This approach requires to traverse the array twice, therefore O(N) time and O(1) space.
#include<bits/stdc++.h>
using namespace std;
void sort012(int arr[],int n){
    // count 0s
    int c0=0,c1=0,c2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            c0++;
        }
       else if(arr[i]==1){
            c1++;
        }
        else{
            c2++;
        }
    }
    int array[n];
    int index=0;
   for(int i=0;i<c0;i++){
       array[index++]=0;
   }
   for(int i=0;i<c1;i++){
       array[index++]=1;
   }
   for(int i=0;i<c2;i++){
       array[index++]=2;
   }
}
int main(){
    int arr[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  sort012(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    // method 1 
    // sort(arr,arr+n);
    // for(int i=0;i<n;i++)
    // cout<<arr[i];
    
}
