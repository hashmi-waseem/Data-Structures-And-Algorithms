//Ques. Implement Linked List Insertion In Middle.

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
void insertAtTail(node*& tail, int data){
    node* temp=new node(data);
    temp->next=NULL;
    tail->next=temp;
    tail=tail->next;
}

void insertInMiddle(node* head, int pos, int data){
    node* temp=new node(data);
    node* temp1=head;
    int count=1;
    while(count<pos-1){
        temp1=temp1->next;
        count++;
    }
    temp->next=temp1->next;
    temp1->next=temp;
}

void printLL(node*& head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
}
int main(){
    node* node1=new node(0);
    node* head=node1;
    node*tail =node1;
    insertAtTail(tail,10);
    insertAtTail(tail,20);
    insertAtTail(tail,40);
    insertAtTail(tail,70);
    insertAtTail(tail,80);
    insertInMiddle(head,4,30);
    insertInMiddle(head,6,60);
    insertInMiddle(head,6,50);
    printLL(head);
}