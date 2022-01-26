//Ques. Sort array using recursion.

#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int size){
    if(size==0 || size==1)
        return;
    for(int i=0; i<size-1; i++)
        if(arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
    bubbleSort(arr,size-1);
}
int main(){
    
    int arr[]={1,2,4,0,-1,-6,-10};
    bubbleSort(arr,7);
    for(auto i: arr)
        cout<<i<<"  ";
    return 0;
}