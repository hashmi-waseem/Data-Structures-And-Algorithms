//Ques. Implement Binary Search using Recursion.

#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int s, int e, int key){
    if(s>e)
        return -1;
    int mid=s+(e-s)/2;
    if(key==arr[mid])
        return mid+1;
    else if(key>arr[mid])
        return binarySearch(arr,mid+1,e,key);
    else
        return binarySearch(arr,s,mid-1,key);
    
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int size=6;
    int key=1;
    int s=0;
    int e=size-1;
    cout<<binarySearch(arr,s,e,key);
}