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
      size++;
      arr[size]=data;
      int index=size;
      while(index>1){
          if(arr[index/2]<arr[index]){
              swap(arr[index/2],arr[index]);
              index=index/2;
          }
          else
            return;
      }
  }
  void print(){
      for(int i=1; i<=size; i++)
        cout<<arr[i]<<"     ";
  }
  void delete1(){
      if(size==0)
        cout<<"Heap is empty"<<endl;
      int i=1;
      swap(arr[i],arr[size]);
      size--;
      while(i<size){
          int leftChild=2*i;
          int rightChild=2*i+1;
          if(leftChild<=size && arr[i]<arr[leftChild]){
              swap(arr[i],arr[leftChild]);
              i=leftChild;
          }
          else if(rightChild<=size && arr[i]<arr[rightChild]){
              swap(arr[i],arr[rightChild]);
              i=rightChild;
          }
          else
            return;
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
    h.delete1();
    h.delete1();
    h.print();
}