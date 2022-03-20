#include<bits/stdc++.h>
using namespace std;
void heapify(int arr[], int size, int index){
    int largest=index;
    int leftChild=2*index;
    int rightChild=2*index+1;
    if(leftChild<size && arr[leftChild]>arr[index])
        largest=leftChild;
    if(rightChild<size && arr[rightChild]>arr[index])
        largest=rightChild;
    if(largest!=index){
        swap(arr[largest],arr[index]);
        heapify(arr,size,largest);
    }
}
int main(){
    int arr[]={-1,10,20,30,40,50};
    int size=6;
    int i=1;
    heapify(arr,size,i);
    for(int i=size/2; i>0; i--){
        heapify(arr,size,i);
    }
    for(auto i:arr)
        cout<<i<<"      ";
}