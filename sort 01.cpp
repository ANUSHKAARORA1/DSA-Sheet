// Sort 0s, 1s 
#include<bits/stdc++.h>
using namespace std;
void sort01(int arr[],int n){
    // count 0s
    int c0=0,c1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            c0++;
        }
       else {
            c1++;
        }
    }
    int index=0;
   for(int i=0;i<c0;i++){
       arr[index++]=0;
   }
   for(int i=0;i<c1;i++){
       arr[index++]=1;
   }
}
int main(){
    int arr[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  sort01(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    // method 1 
    // sort(arr,arr+n);
    // for(int i=0;i<n;i++)
    // cout<<arr[i];
    
}
