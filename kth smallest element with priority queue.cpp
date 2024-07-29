// find kth smallest element without priority queue
//will do with priority queue after studying
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cin>>n;
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<arr[k-1];
}
