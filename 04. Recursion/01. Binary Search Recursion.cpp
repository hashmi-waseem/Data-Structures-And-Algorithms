//Ques. Find Binary Search using recursion.s


#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> arr, int target, int s, int e){

    if(s>e)
        return -1;
    
    int mid=s+(e-s)/2;
    
    if(target==arr[mid])
        return mid;
    else if(target>arr[mid])
        return binarySearch(arr,target,mid+1,e);
    else
        return binarySearch(arr,target,s,mid-1);
    
}
int main(){
    vector<int> v={1,2,3,4,56,60,80,90,101,151,201,230,270,300,456,546, 1000};
    int target;
    cin>>target;
    cout<<binarySearch(v,target,0,v.size()-1);
    return 0;
}