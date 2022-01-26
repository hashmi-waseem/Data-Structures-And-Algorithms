//Ques. Find sum of array using recursion.

#include<bits/stdc++.h>
using namespace std;
int sum=0;
int isSorted(int arr[], int size){
    if(size<=0)
        return 0;
    
    return isSorted(arr,size-1) + arr[size-1];
}
int main(){
    int arr[]={1,2,3};
    int size=3;
    cout<<isSorted(arr,size);
}