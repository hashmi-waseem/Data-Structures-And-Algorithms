//Ques. Implement Linked List Insertion at tail.

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
};

void insertAtTail(node*& head, int data){
    node* temp=new node(data);
    node* temp1=head;
    while(temp1->next!=NULL){
        temp1=temp1->next;
    }
    temp1->next=temp;
}

void printLL(node*& head){
    node*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
}
int main(){
    
    node* node1=new node(0);
    node* head=node1;
    insertAtTail(head,10);
    insertAtTail(head,20);
    printLL(head);
}