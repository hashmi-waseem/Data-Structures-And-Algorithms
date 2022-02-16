#include<iostream>
using namespace std;
class queue{
  int front;
  int back;
  int *arr;
  int size;
  public:
    queue(int s){
        arr=new int[s-1];
        front=-1;
        back=-1;
        this->size=s-1;
    }
    void insert(int data){
        if(front==-1){
            front++;
            back++;
            arr[back]=data;
        }
        else if(back<size){
            back++;
            arr[back]=data;
        }
        else
            cout<<"Queue Overflow"<<endl;
    }
    int del(){
        if(front==-1){
            cout<<"Queue Underflow"<<endl;
            return -1;
        }
        else if(front>=back){
            cout<<"Queue Empty"<<endl;
            return -1;
        }
        else{
            int x=arr[front];
            front++;
            return x;
        }
    }
    int top(){
        if(back==-1){
            cout<<"Queue Underflow";
            return -1;
        }
        else if(front>=back){
            cout<<"Queue Empty"<<endl;
            return -1;
        }
        else{
            return arr[back];
        }
    }
    bool empty(){
        if(back==-1)
            return true;
        return false;
    }
};
int main(){
    queue q(3);
    q.insert(1);
    q.insert(2);
    q.insert(3);
    q.insert(4);
    q.del();
    q.del();
    q.del();
    cout<<q.top()<<endl;
}