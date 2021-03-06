#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        node* left;
        int data;
        node* right;
    node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
node* createTree(node* root){
    int data;
    cout<<"Enter data:  "<<endl;
    cin>>data;
    root=new node(data);
    if(data==-1)
        return NULL;
    cout<<"Enter left of    "<<data<<"      "<<endl;
    root->left=createTree(root->left);
    cout<<"Enter right of   "<<data<<"      "<<endl;
    root->right=createTree(root->right);
    return root;
}
void postOrder(node* root){
    if(root==NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<"  ";
}
int main(){
    node* root=NULL;
    root=createTree(root);
    postOrder(root);
    return 0;
}