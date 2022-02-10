#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
        int* arr;
        int size;
        int top;
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int data){
        if(top>=size){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top]=data;
    }
    void pop(){
        if(top<=-1){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        arr[top]=0;
        top--;
    }
    int top1(){
        return arr[top];
    }
};
int main(){
    Stack s(5);
    s.push(19);
    s.push(12);
    s.pop();
    cout<<s.top1();
}