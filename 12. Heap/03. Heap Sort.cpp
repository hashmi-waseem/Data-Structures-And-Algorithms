
#include<bits/stdc++.h>
using namespace std;
void heapify(int arr[], int size, int index){
    int largest=index;
    int leftChild=2*index;
    int rightChild=2*index+1;
    if(leftChild<=size && arr[leftChild]>arr[largest])
        largest=leftChild;
    if(rightChild<=size && arr[rightChild]>arr[largest])
        largest=rightChild;
    if(largest!=index){
        swap(arr[largest],arr[index]);
        heapify(arr,size,largest);
    }
}
void heapsort(int arr[], int size){
    while(size>1){
        swap(arr[1],arr[size]);
        size--;
        heapify(arr,size,1);
    }
}
int main(){
    int arr[]={-1,30,56,10,89,22};
    int size=5;
    int index=1;
    for(int i=size/2; i>0; i--){
        heapify(arr,size,i);
    }
    heapsort(arr,size);
    for(auto i: arr){
        cout<<i<<"      ";
    }
}