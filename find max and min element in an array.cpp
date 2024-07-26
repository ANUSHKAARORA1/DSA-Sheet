//find max and min element in an array
#include<iostream>
#include <limits.h>
using namespace std;
int mini(int arr[],int n){
    int a=INT_MAX;
    for(int i=0;i<n;i++){
        if(a>arr[i])
        a=arr[i];
    }
    return a;
}
int maxi(int arr[],int n){
   int b=INT_MIN;
   for(int i=0;i<n;i++){
       if(arr[i]>b){
           b=arr[i];
       }
   }
   return b;
   
}
int main(){
    int arr[1000000];
    int n;
    cin>>n;
    cout<<"enter elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int minimum=mini(arr,n);
    int maximum=maxi(arr,n);
    cout<<minimum<<maximum<<endl;
}
