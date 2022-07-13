#include<bits/stdc++.h>
using namespace std;
class graph{
    public:
        unordered_map<int , vector<pair<int,int>> > adj;
        
    void addEdges(int u, int v, int weight){
        pair<int,int> p=make_pair(v,weight);
        adj[u].push_back(p);
    }
    
    void printADJ(){
        for(auto i:adj){
            cout<<i.first<<" -> ";
           for(auto j: i.second){
               cout<<"( "<<j.first<<" )"<<j.second;
           }
           cout<<endl;
        }
    }
    
    void dfs(vector<bool> &visited, stack<int> &s, int node){
        visited[node]=true;
        for(auto i:adj[node]){
            if(!visited[i.first]){
                dfs(visited,s,i.first);
            }
        }
        s.push(node);
    }
    
    void shortestPath(vector<int> &path, stack<int> &s, int src){
        path[src]=0;
        while(!s.empty()){
            int top=s.top();
            s.pop();
            if(path[top]!=INT_MAX){
                for(auto i:adj[top]){
                    if(path[top]+i.second < path[i.first])
                        path[i.first]=path[top]+i.second;
                }
            }
        }
    }
};

int main(){
    graph g;
    g.addEdges(0,1,5);
    g.addEdges(0,2,3);
    g.addEdges(1,2,2);
    g.addEdges(1,3,6);
    g.addEdges(2,3,7);
    g.addEdges(2,4,4);
    g.addEdges(2,5,2);
    g.addEdges(3,4,-1);
    g.addEdges(4,5,-2);
    //g.printADJ();
    int n=6;
    vector<bool> visited(n,0);
    stack<int> s;
    for(int i=0; i<n; i++){
        g.dfs(visited,s,i);
    }
    vector<int> path(n,INT_MAX);
    g.shortestPath(path,s,1);
    for(auto i: path){
        cout<<i<<"  ";
    }
}