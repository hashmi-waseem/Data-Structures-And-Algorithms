// Ques. Create a linked list and insert elements in it.

#include<bits/stdc++.h>
using namespace std;

class node{
  public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertAtHead(node*& head, int data){
    node*temp =new node(data);
    temp->next=head;
    head=temp;
    
}

void printLL(node*& head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    node* n1=new node(50);
    node* head=n1;
    insertAtHead(head,40);
    insertAtHead(head,30);
    insertAtHead(head,20);
    insertAtHead(head,10);
    insertAtHead(head,0);
    printLL(head);
}