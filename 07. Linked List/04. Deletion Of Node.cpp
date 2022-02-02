//Ques. Implement deletion of node in Linked List.


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
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
    }
};
void insertAtTail(node*& tail, int data){
    
    node* temp=new node(data);
    tail->next=temp;
    tail=temp;
    temp->next=NULL;
}
void deleteNode(node*& head, int pos){
    if(pos==1){
        node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    node* prev=head;
    int count=1;
    while(count<pos-1){
        count++;
        prev=prev->next;
    }
    node* current=prev->next;
    node* temp=current;
    prev->next=current->next;
    temp->next=NULL;
    delete temp;
}
void print(node* head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
}
int main(){
    
    node* n1 = new node(10);
    node* head=n1;
    node*tail=n1;
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtTail(tail,50);
    insertAtTail(tail,50);
    insertAtTail(tail,60);
    deleteNode(head,2);
    print(head);
}