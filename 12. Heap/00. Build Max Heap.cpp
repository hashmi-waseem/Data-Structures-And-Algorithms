#include<bits/stdc++.h>
using namespace std;
class heap{
    public:
        int arr[100];
        int size;
        heap(){
            size=0;
        }
    void insert(int data){
        arr[size]=data;
        int index=size;
        size++;
        while(index>0){
            if(arr[index/2]<arr[index]){
                swap(arr[index/2],arr[index]);
                index=index/2;
            }
            else
                return;
        }
    }
    void print(){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<"   ";
        }
    }
};
int main(){
    heap h;
    h.insert(10);
    h.insert(20);
    h.insert(30);
    h.insert(40);
    h.insert(50);
    h.print();
}