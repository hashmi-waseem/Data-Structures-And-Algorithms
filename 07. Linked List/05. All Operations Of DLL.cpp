//Ques. Implement Doubly Linked List.

#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        node* prev;
        int data;
        node*next;
    node(int data){
        prev=NULL;
        this->data=data;
        next=NULL;
    }
    ~node(){
            delete prev;
            delete next;
    }
};
void insertAtHead(node*& head, int data){
    node* temp=new node(data);
    temp->prev=NULL;
    temp->next=head;
    head=temp;
}
void insertAtTail(node*& tail, int data){
    node* temp=new node(data);
    temp->next=NULL;
    temp->prev=tail;
    tail->next=temp;
    tail=temp;
}
void printLL(node*& head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
}
void insetAtPos(node*& head, int pos, int data){
    node* after=head;
    node* before;
    int count=1;
    while(count<pos){
        before=after;
        after=after->next;
        count++;
    }
    node* nodeToInsert=new node(data);
    nodeToInsert->next=before->next;
    before->next=nodeToInsert;
    nodeToInsert->prev=before;
    after->prev=nodeToInsert;
}
void deleteNode(node*& head, int pos){
    int count=1;
    if(pos==1){
        node* temp=head;
        head=head->next;
        temp->next=NULL;
        temp->prev=NULL;
        delete temp;
    }
    else{
    node* prev1;
    node*current=head;
    while(count<pos){
        prev1=current;
        current=current->next;
        count++;
    }
    prev1->next=current->next;
    node* after=current->next;
    after->prev=prev1;
    current->prev=NULL;
    current->next=NULL;
    delete current;
    }
}
int main(){
    node* n1=new node(30);
    node* head=n1;
    node* tail=n1;
    insertAtHead(head,20);
    insertAtHead(head,10);
    insertAtTail(tail,40);
    insertAtTail(tail,70);
    insetAtPos(head,5,50);
    insetAtPos(head,6,60);
    deleteNode(head,5);
  