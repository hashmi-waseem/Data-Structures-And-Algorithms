//Ques. Implement Circular Linked List.

#include<bits/stdc++.h>
using namespace std;
class node{
  public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        next=NULL;
    }
    
    ~node(){
        delete this;
        next=NULL;
    }
};
void insertNode(node*& tail, int element, int data){
    if(tail==NULL){
        node* temp=new node(data);
        temp->next=temp;
        tail=temp;
    }
    else{
        node* temp=tail;
        while(temp->data!=element && temp->next!=tail){
            temp=temp->next;
        }
        node* temp1=new node(data);
        temp1->next=temp->next;
        temp->next=temp1;
    }
}

void printLL(node* tail){
    node* temp=tail;
    do{
        cout<<tail->data<<"  ";
        tail=tail->next;
    }while(tail->next!=temp);
    cout<<tail->data<<"  ";
}

int main(){
    node* tail=NULL;
    insertNode(tail,5,3);
    insertNode(tail,3,4);
    insertNode(tail,4,5);
    insertNode(tail,6,10);
    printLL(tail);
}