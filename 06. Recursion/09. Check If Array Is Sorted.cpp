//Ques. Check whether the array is sorted.

#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int size){
    if(size==0 || size==1)
        return true;
    else if(arr[0]>arr[1])
        return false;
    return isSorted(arr+1, size-1);
}
int main(){
    int arr[]={1,2,3,5,4,6,7,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<isSorted(arr,size);
} 