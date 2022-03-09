#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;
    Node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};
Node* insertInBST(Node* root, int d){
    if(root==NULL){
        root=new Node(d);
        return root;
    }
    if(d>root->data){
        root->right=insertInBST(root->right,d);
    }
    else
        root->left=insertInBST(root->left,d);
    return root;
}
void input(Node*& root){
    int d;
    cin>>d;
    while(d!=-1){
        root=insertInBST(root,d);
        cin>>d;
    }
}
void preorder(Node* root){
    if(root==NULL)
        return;
    cout<<root->data<<"     ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    Node* root=NULL;
    input(root);
    preorder(root);
}