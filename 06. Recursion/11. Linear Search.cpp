//Ques. Linear Search using recursion.

#include<bits/stdc++.h>
using namespace std;
int linearSearch(int arr[], int size, int element){
    if(size<=0)
        return -1;
    if(element==arr[size-1])
        return size;
    return linearSearch(arr,size-1,element);
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int size=6;
    int element = 0;
    cout<<linearSearch(arr,size,element);
}