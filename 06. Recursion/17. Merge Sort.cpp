//Ques. Implement Merge Sort Using recursion.

#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& arr, int s, int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;             //dividing into 2 arrays
    
    int* arr1=new int[len1];
    int* arr2=new int[len2];
    
    int mainIndex=s;            //putting values of 2 arrays
    for(int i=0; i<len1; i++)
        arr1[i]=arr[mainIndex++];
    for(int i=0; i<len2; i++)
        arr2[i]=arr[mainIndex++];
        
    int index1=0;
    int index2=0;
    mainIndex=s;
    
    while(index1<len1 && index2<len2){      //merging 2 arrays
        if(arr1[index1]<arr2[index2])
            arr[mainIndex++]=arr1[index1++];
        else
            arr[mainIndex++]=arr2[index2++];
    }
    while(index1<len1)
        arr[mainIndex++]=arr1[index1++];        //merging remaining part
    while(index2<len2)
        arr[mainIndex++]=arr2[index2++];
}

void mergeSort(vector<int>& arr, int s, int e){
    if(s>=e)
        return;
    int mid=s+(e-s)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
}

int main(){
    vector<int> arr={21,3,2,-10,90,89,21,0};
    mergeSort(arr,0,arr.size());
    for(auto i: arr)
        cout<<i<<"  ";
}