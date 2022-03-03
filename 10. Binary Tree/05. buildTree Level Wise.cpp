#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
        TreeNode* left;
        int data;
        TreeNode* right;
    TreeNode(int d){
        this->data=d;
        left=NULL;
        right=NULL;
    }
};
void createFromBFS(TreeNode*& root){
    queue<TreeNode*> q;
    int d;
    cout<<"Enter data "<<endl;
    cin>>d;
    root=new TreeNode(d);
    q.push(root);
    while(!q.empty()){
        TreeNode* front=q.front();
        q.pop();
        cout<<"Enter left data of "<<front->data<<endl;
        int c;
        cin>>c;
        if(c!=-1){
            TreeNode* left1=new TreeNode(c);
            q.push(left1);
        }
        cout<<"Enter right data of "<<front->data<<endl;
        int b;
        cin>>b;
        if(b!=-1){
            TreeNode* right1=new TreeNode(b);
            q.push(right1);
        }
    }
}
int main(){
    TreeNode* root=NULL;
    createFromBFS(root);
    return 0;
}