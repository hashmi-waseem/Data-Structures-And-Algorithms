#include<bits/stdc++.h>
using namespace std;
void buildADJ(vector<pair<int,int>> &edges, unordered_map<int,vector<int>> &adj){
    for(int i=0; i<edges.size(); i++){
        int u=edges[i].first;
        int v=edges[i].second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}
void dfs(unordered_map<int,vector<int>> &adj, vector<int> &disc, vector<int> &low, 
vector<bool> &visited, int parent, int &timer, int node, vector<bool> &art){
    visited[node]=1;
    int child=0;
    low[node]=disc[node]=timer++;
    for(auto nbr: adj[node]){
        if(nbr==parent)
            continue;
        if(!visited[nbr]){
            dfs(adj,disc,low,visited,node,timer,nbr,art);
            low[node]=min(low[nbr],low[node]);
            if(low[nbr]>=disc[node] && parent!=-1){
                art[node]=true;
            }
            child++;
        }
        else{
            low[node]=min(low[node],disc[nbr]);
        }
    }
    if(child>1 && parent==-1)
        art[node]=true;
}
int main(){
    unordered_map<int,vector<int>> adj;
    vector<pair<int,int>> edges;
    int v=4;
    edges.push_back(make_pair(0,3));
    edges.push_back(make_pair(3,4));
    edges.push_back(make_pair(0,4));
    edges.push_back(make_pair(0,1));
    edges.push_back(make_pair(1,2));
    buildADJ(edges,adj);
    vector<int> disc(v,-1);
    vector<int> low(v,-1);
    int parent=-1;
    vector<bool> visited(v,0);
    int timer=0;
    vector<bool> art(v,0);
    for(int i=0; i<v; i++){
        if(!visited[i])
            dfs(adj,disc,low,visited,parent,timer,i,art);
    }
    for(int i=0; i<art.size(); i++){
        if(art[i]){
            cout<<i<<endl;
        }
    }
}