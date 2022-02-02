//Ques. Implement insertion using tail pointer.

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
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtTail(tail,50);
    printLL(head);
}