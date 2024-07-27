// Move all negative elements to end in order with extra space allowed
// Input : arr[] = {1, -1, 3, 2, -7, -5, 11, 6 }
// Output : 1  3  2  11  6  -1  -7  -5 

// The problem becomes easier if we are allowed to use extra space. Idea is create an empty array (temp[]). First we store all positive element of given array and then we store all negative element of array in Temp[]. Finally we copy temp[] to original array
#include<iostream>
using namespace std;
void negativetoend(int arr[ ],int n){
    int temp[n];
    int index=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            temp[index++]=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            temp[index++]=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        cout<<temp[i];
    }
    
}
int main(){
    int arr[10000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    negativetoend(arr,n);
    
}
