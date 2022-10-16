#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct Node{
    Node* links[26];
    bool flag=false;
    bool isPresent(char &ch){
        return (links[ch-'a']) != NULL;
    }
    void putChar(char &ch, Node* node){
        links[ch-'a']=node;
    }
    
    Node* getChar(char &ch){
        return links[ch-'a'];
    }
    void setEnd(){
        flag=true;
    }
    bool isEnd(){
        return flag;
    }
};
class Trie{
    private:
        Node* root;
    public:
        Trie(){
            this->root = new Node();
        }
        
        void insert(string s){
            Node* node=root;
            for(int i=0; i<s.size(); i++){
                if(node->isPresent(s[i])){
                    node=node->getChar(s[i]);
                }
                else{
                    node->putChar(s[i],new Node());
                    node=node->getChar(s[i]);
                }
            }
            node->setEnd();
        }
        
        bool find(string s){
            Node* node=root;
            for(int i=0; i<s.size(); i++){
                if(node->isPresent(s[i]))
                    node=node->getChar(s[i]);
                else
                    return false;
            }
            return node->isEnd();
        }
        bool startsWith(string s){
            Node* node=root;
            for(int i=0; i<s.size(); i++){
                if(node->isPresent(s[i]))
                    node=node->getChar(s[i]);
                else
                    return false;
            }
            return true;
        }
};
int main(){
    string s1="hello";
    string s2="hell";
    string s3="help";
    Trie* t=new Trie();
    t->insert(s1);
    t->insert(s2);
    t->insert(s3);
    cout<<t->find("hel")<<endl;
    cout<<t->find("help")<<endl;
    cout<<t->startsWith("he")<<endl;
    cout<<t->startsWith("help")<<endl;
}